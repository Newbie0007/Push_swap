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
		ft_putendl_fd("OK", 2);
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
		if (temp->data >= 2147483647)
			ft_putendl("ERROR");
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
	while (get_next_line(0, &line) != 0)
	{
	    ft_putendl(line);
		compare(&stack_a, &stack_b, line);
	}
}

void	compare(t_swap **stack_a, t_swap **stack_b, char *line)
{
	if (ft_strcmp("sa", line) == 0)
		sa(stack_a);
	else if (ft_strcmp("sb", line) == 0)
		sb(stack_b);
	else if (ft_strcmp("ss", line) == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp("pa", line) == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp("pb", line) == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp("ra", line) == 0)
		ra(stack_a);
	else if (ft_strcmp("rb", line) == 0)
		rb(stack_b);
	else if (ft_strcmp("rrr", line) == 0)
		rrr(stack_a, stack_b);
	else if (ft_strcmp("rra", line) == 0)
		rra(stack_a);
	else if (ft_strcmp("rrb", line) == 0)
		rrb(stack_b);
	else if (ft_strcmp("rrr", line) == 0)
		rrr(stack_a, stack_b);
	else if (ft_strcmp("sa", line) == 0)
		sa(stack_a);
	else if (ft_strcmp("", line) != 0)
		ft_putendl("ERROR");
}
