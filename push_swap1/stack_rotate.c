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

#include "push_swap.h"

void	ra(t_swap **stack_a)
{
	t_swap *temp;

	temp = *stack_a;
	if (temp == NULL || temp->next == NULL)
		return ;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_a;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_putendl("ra");
}

void	rb(t_swap **stack_b)
{
	t_swap *temp;

	temp = *stack_b;
	if (temp == NULL || temp->next == NULL)
		return ;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_b;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_putendl("rb");
}
void	ra2(t_swap **stack_a)
{
	t_swap *temp;

	temp = *stack_a;
	if (temp == NULL || temp->next == NULL)
		return ;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_a;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	//ft_putstr("ra ");
}

void	rb2(t_swap **stack_b)
{
	t_swap *temp;

	temp = *stack_b;
	if (temp == NULL || temp->next == NULL)
		return ;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_b;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	//ft_putstr("rb ");
}
void	rr(t_swap **stack_a, t_swap **stack_b)
{
	if (*stack_a != NULL && *stack_b != NULL  && (*stack_a)->next != NULL && (*stack_b)->next != NULL)
	{
		ra2(stack_a);
		rb2(stack_b);
		ft_putendl("rr");
	}
	else
		return ;
}
