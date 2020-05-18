/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rev_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 16:27:30 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 16:27:34 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_swap **stack_a)
{
	t_swap *temp;
	t_swap *temp2;

	temp = *stack_a;
	temp2 = *stack_a;
	if (temp == NULL || temp->next == NULL)
		return ;
	while (temp->next)
		temp = temp->next;
	while (temp2->next->next)
		temp2 = temp2->next;
	temp->next = *stack_a;
	*stack_a = temp;
	temp2->next = NULL;
}

void	rrb(t_swap **stack_b)
{
	t_swap *temp;
	t_swap *temp2;

	temp = *stack_b;
	temp2 = *stack_b;
	if (temp == NULL || temp->next == NULL)
		return ;
	while (temp->next)
		temp = temp->next;
	while (temp2->next->next)
		temp2 = temp2->next;
	temp->next = *stack_b;
	*stack_b = temp;
	temp2->next = NULL;
}

void	rrr(t_swap **stack_a, t_swap **stack_b)
{
	if (*stack_a != NULL && *stack_b != NULL)
	{
		rra(stack_a);
		rrb(stack_b);
	}
	else
		return ;
}
