/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 16:26:27 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 16:26:30 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_list.h"

void	ra(t_swap **stack_a)
{
	t_swap *temp;

	temp = *stack_a;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_a;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
}

void	rb(t_swap **stack_b)
{
	t_swap *temp;

	temp = *stack_b;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_b;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
}

void	rr(t_swap **stack_a, t_swap **stack_b)
{
	if (*stack_a != NULL && *stack_b != NULL)
	{
		ra(stack_a);
		rb(stack_b);
	}
	else
		return ;
}
