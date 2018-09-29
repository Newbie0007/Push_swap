/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.data                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:29:12 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 17:08:22 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap_stack(t_swap *stack_a, t_swap *stack_b)
{
	t_swap	*temp;
	int		i;

	i = 1;
	while (i == 1)
	{
		i = 0;
		temp = stack_a;
		while (stack_a->next != NULL)
		{
			if (stack_a->data > stack_a->next->data)
			{
				sa(&stack_a);
				ra(&stack_a);
				i = 1;
			}
			pb(&stack_a, &stack_b);
			temp = temp->next;
		}
		sb(&stack_b);
		while (stack_b != NULL)
			pa(&stack_a, &stack_b);
		rr(&stack_a, &stack_b);
	}
}

void		sort(t_swap *stack_a, t_swap *stack_b, int length)
{
	int		i;
	t_swap	*temp;

	i = 0;
	temp = stack_a;
	stack_b = NULL;
	length = length + 2;
	while (1)
	{while (temp->next && temp->data > temp->next->data)
	{
		print_stack(&temp);
		if (i < 1 && stack_a->next != NULL)
			sa(&temp);
		if (i > 1)
			ra(&temp);
		if (i > 1)
			rra(&temp);
		if (i > 4 && stack_a->next != NULL)
			pb(&temp, &stack_b);
		if (i > 3)
			sa(&stack_b);
		if (i > 3 && stack_b->next != NULL)
			pa(&temp, &stack_b);
		if (i > 4)
			rr(&temp, &stack_b);
		if (i > 4 && stack_b->next != NULL)
			rrb(&stack_b);
		if (i > 4)
			rrr(&temp, &stack_b);
		i++;
		temp = temp->next;}
		
	}
	print_stack(&stack_a);
	//check_stack(&stack_a, &stack_b, length);
	if (i == length)
		return ;
}

void		check_stack(t_swap **stack_a, t_swap **stack_b, int argc)
{
	t_swap	*temp_a;
	int		length;
	int		i;

	temp_a = *stack_a;
	i = 0;
	length = argc - 2;
	while (temp_a->next != NULL && temp_a->data < temp_a->next->data)
	{
		i++;
		temp_a = temp_a->next;
	}
	if (i == length)
		ft_putstr("Stack is sorted!!!\n");
	else
		//swap_stack(*stack_a, *stack_b);
		sort(*stack_a, *stack_b, length);
}

int			main(int argc, char **av)
{
	t_swap	*stack_a;
	t_swap	*stack_b;
	int		i;
	int		num;

	i = 0;
	stack_b = NULL;
	stack_a = NULL;
	if (argc < 3)
		return (0);
	while (av[++i] != '\0')
	{
		if (ft_isdigit(*av[i]) == 0)
		{
			ft_putstr("Not valid argument!!!\n");
			return (0);
		}
		num = ft_atoi(av[i]);
		stack_a = create_stack(&stack_a, num);
	}
	check_stack(&stack_a, &stack_b, argc);
	ft_putchar('\n');
	return (0);
}
