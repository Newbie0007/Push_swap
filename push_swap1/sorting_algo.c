/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.data                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:29:12 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 17:08:22 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			findMaxMin(t_swap *stack_a, int min_max)
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

int			getlast_stack(t_swap *stack_a)
{
	t_swap	*temp;
	int		length;

	length = 1;
	temp = stack_a;
	while (temp->next != NULL)
	{
		length++;
		temp = temp->next;
	}
	temp->length = length;
	return temp->data;
}

int			swaps_stackb(t_swap **stack_a, t_swap **stack_b, int max, int min, int lastStack)
{
	if ((**stack_a).data == max)
		ra(stack_a);
	else if (lastStack == min)
		rra(stack_a);
	else if ((**stack_a).data > lastStack && lastStack != max)
		ra(stack_a);
	else if ((**stack_a).data > (**stack_a).next->data)
		sa(stack_a);
	else if ((**stack_a).data == min && (**stack_a).next->data == max)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((**stack_a).next != NULL && check_status(stack_a) != 1)
		pb(stack_a, stack_b);
	else if (getlength(*stack_b) == 1)
		pa(stack_a, stack_b);
	return 1;
}

int			loop_stackb(t_swap **stack_a, t_swap **stack_b, int max)
{
	if (*stack_b != NULL && getlength(*stack_b) > 1)
	{
		if ((**stack_a).data == max)
			ra(stack_a);
		if ((**stack_a).data > (**stack_a).next->data && (**stack_b).data < (**stack_b).next->data)
			ss(stack_a, stack_b);
		if ((**stack_a).data > (**stack_a).next->data)
			sa(stack_a);
		if ((**stack_b).data < (**stack_b).next->data)
			sb(stack_b);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	return 1;
}

void		swaps_stack5(t_swap *stack_a, t_swap *stack_b)
{
	t_swap	*temp;
	int		i;
	int		lastStack;
	int		max;
	int		min;

	i = 1;
	max = findMaxMin(stack_a, 1);
	min = findMaxMin(stack_a, 0);
	while (i == 1)
	{
		temp = stack_a;
		lastStack = getlast_stack(stack_a);
		while (temp != NULL)
		{
			if (check_status(&stack_a) == 1 && stack_b == NULL)
				exit(0);
			if (swaps_stackb(&stack_a, &stack_b, max, min, lastStack) == 1)
				break ;
			temp = temp->next;
		}
		if (loop_stackb(&stack_a, &stack_b, max) != 1)
			break ;
	}
}