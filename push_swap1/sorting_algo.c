/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.data                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:29:12 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 17:08:22 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swaps_stack100(t_swap *stack_a, t_swap *stack_b, t_swap *temp1)
{
	t_swap	*temp;
	int		i;

	i = 1;
	while (i == 1)
	{
		i = 0;
		temp = stack_a;
		while (stack_a->next != NULL)
		{
			if (stack_a->data > stack_a->next->data)
			{
				sa(&stack_a);
				i = 1;
			}
			if (check_status(&stack_a, &stack_b) == 1)
				break ;
			pb(&stack_a, &stack_b);
			temp = temp->next;
		}
		while (stack_b != NULL)
			pa(&stack_a, &stack_b);
	}
}

void		swaps_stack(t_swap *stack_a, t_swap *stack_b, t_swap *temp1)
{
	t_swap	*temp;
	int		i;

	i = 1;
	while (i == 1)
	{
		i = 0;
		temp = stack_a;
		while (stack_a->next != NULL)
		{
			if (stack_a->data > stack_a->next->data)
			{
				sa(&stack_a);
				i = 1;
			}
			if (stack_a->data < stack_a->next->data && stack_a->data > temp1->data)
			{
				rra(&stack_a);
				i = 1;
			}
			if (check_status(&stack_a, &stack_b) == 1)
				break ;
			pb(&stack_a, &stack_b);
			temp = temp->next;
		}
		while (stack_b != NULL)
			pa(&stack_a, &stack_b);
	}
}

void		swaps_stack2(t_swap *stack_a, t_swap *stack_b, t_swap *temp1)
{
	if (stack_a->data > stack_a->next->data && stack_a->data > temp1->data)
	{
		ra(&stack_a);
		if (check_status(&stack_a, &stack_b) == 1)
			return ;
	}
	if (stack_a->data < stack_a->next->data && stack_a->data > temp1->data)
	{
		rra(&stack_a);
		if (check_status(&stack_a, &stack_b) == 1)
			return ;
	}
	else if (stack_a->data > stack_a->next->data)
	{
		sa(&stack_a);
		if (check_status(&stack_a, &stack_b) == 1)
			return ;
	}
	else
		return ;
}