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
	if (*stack_a == NULL || (*stack_a)->next == NULL) 
        return; 
    t_swap *secLast = NULL;
    t_swap *last;
	
	last = *stack_a;
    while (last->next != NULL) 
    { 
        secLast = last; 
        last = last->next; 
    } 
    secLast->next = NULL;
	last->next = *stack_a;
	*stack_a = last; 
	ft_putendl("rra");
}

void	rrb(t_swap **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL) 
        return; 
    t_swap *secLast = NULL;
    t_swap *last;
	
	last = *stack_b;
    while (last->next != NULL) 
    { 
        secLast = last; 
        last = last->next; 
    } 
    secLast->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	ft_putendl("rrb");
}
void	rra2(t_swap **stack_a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL) 
        return; 
    t_swap *secLast = NULL;
    t_swap *last;
	
	last = *stack_a;
    while (last->next != NULL) 
    { 
        secLast = last; 
        last = last->next; 
    } 
    secLast->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

void	rrb2(t_swap **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL) 
        return; 
    t_swap *secLast = NULL;
    t_swap *last;
	
	last = *stack_b;
    while (last->next != NULL) 
    { 
        secLast = last; 
        last = last->next; 
    } 
    secLast->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
}

void	rrr(t_swap **stack_a, t_swap **stack_b)
{
	if (*stack_a != NULL && *stack_b != NULL && (*stack_a)->next != NULL && (*stack_b)->next != NULL)
	{
		rra2(stack_a);
		rrb2(stack_b);
		ft_putendl("rrr");
	}
	else
		return ;
}

