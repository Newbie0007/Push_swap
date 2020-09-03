/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_funct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 17:00:58 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 17:01:02 by tngwenya         ###   ########.fr       */
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

t_swap		*create_stack(t_swap **link, int num)
{
	t_swap	*elem;
	t_swap	*temp;

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

void		print_stack(t_swap **stack_a)
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

int			arguments(char **argv)
{
	int i;

	i = 0;
	while (argv[++i] != '\0')
	{
		if (ft_isdigit(*argv[i]) == 0 && *argv[i] != '-')
		{
			ft_putendl("ERROR");
			return (0);
		}
	}
	return (1);
}

int			getlength(t_swap *stack_a)
{
	int 	length;
	t_swap *temp;

	length = 1;
	temp = stack_a;
	while (temp->next != NULL)
	{
		length++;
		temp = temp->next;
	}
	return length;
}