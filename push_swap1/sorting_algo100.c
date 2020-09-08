/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo100.data                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:29:12 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 17:08:22 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

static int	findMaxMin(t_swap *stack_a, int min_max)
{
	int max;
	int min;
	t_swap *temp;

	max = 0;
	min = 2147483647;
	temp = stack_a;
	while (temp != NULL)
	{
		if (temp->data > max && min_max == 1)
			max = temp->data;
		if (temp->data <= min && min_max == 0)
			min = temp->data;
		temp = temp->next;
	}
	return min_max == 1 ? max : min;
}

static void	executePB(t_swap **stack_a, t_swap **stack_b, int iter)
{
	int a;
	
	a = 1;
	if (!stack_a)
		return ;
	while(a <= iter)
	{
		pa(stack_a, stack_b);
		a++;
	}
}

static int	   ft_position(t_swap *stack_a, int min)
{
	t_swap	*temp;
    int     position;

	temp = stack_a;
    position = 1;
	while (temp->next != NULL)
	{
        if (temp->data == min)
			return position;
        position++;
		temp = temp->next;
	}
	return position;
}

void		swaps_stack100(t_swap *stack_a, t_swap *stack_b)
{
	t_swap	*temp;
	int		i, length, less, position, min;

	i = 1;
	less = stack_a->length;
	while (i == 1)
	{
		temp = stack_a;
        length = getlength(stack_a);
        min = findMaxMin(stack_a, 0);
        position = ft_position(stack_a, min);
		while (temp != NULL)
		{
			if (check_status(&stack_a) == 1 && stack_b == NULL)
				exit(0);
            if (stack_a->data == min && check_status(&stack_a) != 1)
            {
                pb(&stack_a, &stack_b);
                break ;
            }
			 if (check_status(&stack_a) == 1 && stack_b != NULL)
			{
                executePB(&stack_a, &stack_b, less);
				break ;
			}
            (position <= (length/2) && stack_a->data != min) ? ra(&stack_a) : rra(&stack_a);
			break ;
			temp = temp->next;
		}
	}
}