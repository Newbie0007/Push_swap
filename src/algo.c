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

int		cake_swap(t_swap *stack_a, t_swap *stack_b)
{
	t_swap	*temp;
	int		i;

	temp = stack_a;
	i = 0;
	stack_b = NULL;
	if (temp->data > temp->next->data)
	{
		i++;
		return (1);
	}
	else
		return (0);
}
