/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 16:29:49 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 16:29:53 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_swap **stack_a)
{
	t_swap *temp;

	temp = *stack_a;
	if (temp != NULL)
	{
		ft_swap(&temp->data, &temp->next->data);
		ft_putstr("sa ");
	}
	else
		return ;
}

void	sb(t_swap **stack_b)
{
	t_swap *temp;

	temp = *stack_b;
	if (temp != NULL)
	{
		ft_swap(&temp->data, &temp->next->data);
		ft_putstr("sb ");
	}
	else
		return ;
}

void	ss(t_swap **stack_a, t_swap **stack_b)
{
	t_swap *temp_a;
	t_swap *temp_b;

	temp_a = *stack_a;
	temp_b = *stack_b;
	if (temp_a != NULL && temp_b != NULL)
	{
		ft_swap(&temp_b->data, &temp_b->next->data);
		ft_swap(&temp_a->data, &temp_a->next->data);
		ft_putstr("ss ");
	}
	else
		return ;
}
