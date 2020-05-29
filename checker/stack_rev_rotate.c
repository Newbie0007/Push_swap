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

#include "checker_list.h"

t_swap	*push(t_swap **head_ref, int new_data) 
{ 
    t_swap	*new_node = (t_swap*) malloc(sizeof(t_swap)); 
  
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
	return *head_ref;
} 

void	rra(t_swap **stack_a)
{ 
    t_swap *secLast = NULL;
    t_swap *last;
	
	last = *stack_a;
	if (last == NULL) 
        return ;
    while (last->next != NULL) 
    { 
        secLast = last; 
        last = last->next; 
    } 
    secLast->next = NULL;
	last->next = *stack_a;
	*stack_a = last; 
}

void	rrb(t_swap **stack_b)
{ 
    t_swap *secLast = NULL;
    t_swap *last;
	
	last = *stack_b;
	if (last == NULL) 
        return ;
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
	t_swap	*temp1;
	t_swap	*temp2;
	
	temp1 = *stack_a;
	temp2 = *stack_b;
	if (temp1 != NULL && temp2 != NULL)
	{
		rra(stack_a);
		rrb(stack_b);
	}
	else
		return ;
}
