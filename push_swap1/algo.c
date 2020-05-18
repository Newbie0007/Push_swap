/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 17:39:48 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 16:42:33 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_min(int *tab, unsigned int len)
{
	unsigned int	i;
	int				min;

	if (len == 0)
		return (0);
	i = 1;
	min = *tab;
	while (i != len)
	{
		if (min > *(tab + i))
			min = *(tab + i);
		i++;
	}
	return (min);
}

static int		cake_swap1(t_swap *stack_a, int *go)
{
	t_swap	*temp;
	int		i;

	temp = stack_a;
	i = *go;
	if (temp->data > temp->next->data)
	{
		i++;
		return (i);
	}
	else
		return (0);
}

static int		cake_swap2(t_swap *stack_a, int *go)
{
	t_swap	*temp;
	int		i;

	temp = stack_a;
	i = *go;
	if (temp->data > temp->next->data)
	{
		i++;
		return (i);
	}
	else
		return (0);
}

int		cake_swap(t_swap *stack_a, int *go)
{
	t_swap	*temp;
	int		i;

	temp = stack_a;
	i = *go;
	if (temp->data > temp->next->data)
	{
		i++;
		return (i);
	}
	else
		return (0);
}