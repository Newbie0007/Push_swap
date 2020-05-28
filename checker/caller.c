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

int		arguments(char **argv)
{
	int d;
	
	d = 0;
	while (argv[++d] != '\0'){
		if (ft_isdigit(*argv[d]) == 0 || *argv[d] == '-' || *argv[d] >= 2147483647 || *argv[d] <= -2147483648)
		{
		    ft_putendl("ERROR");
    		return (0);
		}
	}
	return (1);
}

void	reading_doubles(t_swap **stack_a)
{
	int count = 0;
	char *line;
	
    t_swap *temp;
    t_swap *temp1;
    temp = *stack_a;
    while(temp!=NULL)
    {
        temp1 = *stack_a;
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
}

void	compare(t_swap **stack_a, t_swap **stack_b, char *line)
{
	//ft_putendl("Print from compare");
	//print_stack(stack_a);
	//ft_putnbr(&stack_a->data);
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
