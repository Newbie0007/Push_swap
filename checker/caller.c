/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caller.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 14:49:11 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 16:16:17 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_list.h"

void	check_stack(t_swap **stack_a, t_swap **stack_b, int argc)
{
	t_swap	*temp_a;
	int		length;
	int		i;

	temp_a = *stack_a;
	i = 0;
	length = argc - 2;
	while (temp_a->next != NULL && temp_a->data < temp_a->next->data)
	{
		i++;
		temp_a = temp_a->next;
	}
	if (i == length)
		ft_putendl("OK");
	else
		ft_putendl("KO");
}

int		arguments(char **argv)
{
	int d;
	
	d = 0;
	while (argv[++d] != '\0'){
		if (ft_isdigit(*argv[d]) == 0 || *argv[d] == '-')
		{
		    ft_putendl("ERROR");
    		return (0);
		}
	}
	return (1);
}

void	reading(t_swap *stack_a, t_swap *stack_b)
{
	int count = 0;
	char *line;
	
    t_swap *temp;
    t_swap *temp1;
    temp = stack_a;
    while(temp!=NULL)
    {
        temp1 = stack_a;
        count=0;
        while(temp1 != NULL)
        {
            if(temp->data == temp1->data)
                count++;
            temp1=temp1->next;
        }
        if(count>1)
        {
            ft_putendl("ERROR");
			return ;
        }
        temp=temp->next;
    }
	while (get_next_line(0, &line))
	{
		compare(&stack_a, &stack_b, line);
	}
	print_stack(&stack_a);
}

void	compare(t_swap **stack_a, t_swap **stack_b, char *line)
{
	if (!(ft_strncmp("sa\0", line, 3)))
		sa(stack_a);
	else if (!(ft_strncmp("sb\0", line, 3)))
		sb(stack_b);
	else if (!(ft_strncmp("ss\0", line, 3)))
		ss(stack_a, stack_b);
	else if (!(ft_strncmp("pa\0", line, 3)))
		pa(stack_a, stack_b);
	else if (!(ft_strncmp("pb\0", line, 3)))
		pb(stack_a, stack_b);
	else if (!(ft_strncmp("ra\0", line, 3)))
		ra(stack_a);
	else if (!(ft_strncmp("rb\0", line, 3)))
		rb(stack_b);
	else if (!(ft_strncmp("rr\0", line, 3)))
		rr(stack_a, stack_b);
	else if (!(ft_strncmp("rra\0", line, 4)))
		rra(stack_a);
	else if (!(ft_strncmp("rrb\0", line, 4)))
		rrb(stack_b);
	else if (!(ft_strncmp("rrr\0", line, 4)))
		rrr(stack_a, stack_b);
	else
		ft_putendl("ERROR");
}
