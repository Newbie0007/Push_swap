/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_funct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 17:40:02 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/25 17:40:13 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap		*new_link(t_swap *link, int num)
{
  t_swap	*temp;

  temp = ft_memalloc(sizeof(t_swap));
  temp->data = num;
  temp->next = link;
  link = temp;
 
  return (link);
}

t_swap          *create_stack(t_swap **link, int num)
{
  t_swap        *elem;
  t_swap        *temp;

  elem = ft_memalloc(sizeof(t_swap));
  elem->data = num;
  elem->next = NULL;
  if (*link == NULL)
    return (elem);
  temp = *link;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = elem;
  return (*link);
}

void			print_stack(t_swap **stack_a)
{
	t_swap *head;

  head = *stack_a;
	while (head != NULL)
	{
		ft_putnbr(head->data);
    ft_putchar(' ');
		head = head->next;
	}
  ft_putchar('\n');
}

void		reverse(t_swap **headref)
{
	t_swap *prev = NULL;
	t_swap *current = *headref;
	t_swap *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*headref = prev;
}
