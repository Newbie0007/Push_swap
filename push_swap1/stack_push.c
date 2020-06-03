/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 16:25:10 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 16:25:15 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		pa(t_swap **stack_a, t_swap **stack_b)
{
	int	num;

	if (*stack_b == NULL)
		return ;
	num = (*stack_b)->data;
	*stack_a = new_link(*stack_a, num);
	*stack_b = (*stack_b)->next;
	ft_putendl("pa");
}

void		pb(t_swap **stack_a, t_swap **stack_b)
{
	int	num;

	if (*stack_a == NULL)
		return ;
	num = (*stack_a)->data;
	*stack_b = new_link(*stack_b, num);
	*stack_a = (*stack_a)->next;
	ft_putendl("pb");
}