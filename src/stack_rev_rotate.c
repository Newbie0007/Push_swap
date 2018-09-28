/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rev_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 17:39:54 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/25 17:40:15 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_swap **stack_a)
{
	t_swap *temp;
	t_swap *temp2;

	temp = *stack_a;
	temp2 = *stack_a;
	while (temp->next)
		temp = temp->next;
	while (temp2->next->next)
		temp2 = temp2->next;
	temp->next = *stack_a;
	*stack_a = temp;
	temp2->next = NULL;
  ft_putstr("rra ");
}

void    rrb(t_swap **stack_b)
{
	t_swap *temp;
	t_swap *temp2;

	temp = *stack_b;
	temp2 = *stack_b;
	while (temp->next)
		temp = temp->next;
	while (temp2->next->next)
		temp2 = temp2->next;
	temp->next = *stack_b;
	*stack_b = temp;
	temp2->next = NULL;
  ft_putstr("rrb ");
}

void    rrr(t_swap **stack_a, t_swap **stack_b)
{
  if (*stack_a != NULL && *stack_b != NULL)
  {
    rra(stack_a);
    rrb(stack_b);
		ft_putstr("rrr ");
  }
  else
    return ;
}
