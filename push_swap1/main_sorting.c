/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sorting.data                                          :+:      :+:    :+:   */
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
	t_swap	*temp, *temp1;
	int		i;

	i = 0;
	temp1 = stack_a;
	while (temp1->next != NULL)
	{
		i++;
		temp1 = temp1->next;
	}
	int length = i;
	if (length < 5)
	{
		swaps_stack(stack_a, stack_b, temp1);
		return ;
	}
	if (length < 3)
	{
		swaps_stack2(stack_a, stack_b, temp1);
		return ;
	}
	else
	{
		swaps_stack100(stack_a, stack_b, temp1);
		return ;
	}
}

int			check_status(t_swap **stack_a, t_swap **stack_b)
{
	t_swap	*temp_a;

	temp_a = *stack_a;
	while (temp_a->next && temp_a->data <= temp_a->next->data)
		temp_a = temp_a->next;
	if (temp_a->next == NULL)
		return (1);
	else
		return (0);
}


void		check_stack(t_swap **stack_a, t_swap **stack_b, int argc)
{
	t_swap	*temp_a;
	int		length;
	int		i;

	temp_a = *stack_a;
	i = 0;
	length = argc - 2;
	while (temp_a->next && temp_a->data <= temp_a->next->data)
	{
		i++;
		temp_a = temp_a->next;
	}
	if (i == length)
		return ;	//ft_putstr("Stack is sorted!!!\n");
	else
		swap_stack(*stack_a, *stack_b);
}

char	**returns(int *argc, char **argv)
{
	char *str;

	str = ft_strjoin("a.out ", argv[1]);
	argv = ft_strsplit(str, ' ');
	while (argv[*argc])
		*argc += 1;
	return (argv);
}

int			main(int argc, char **argv)
{
	t_swap	*stack_a;
	t_swap	*stack_b;
	int		i;
	int		num;

	i = 0;
	stack_b = NULL;
	stack_a = NULL;
	if (argc == 2)
		argv = returns(&argc, argv);
	if (arguments(argv) == 0 || argc < 2)
		return (1);
	while (argv[++i] != '\0')
	{
		num = ft_atoi(argv[i]);
		stack_a = create_stack(&stack_a, num);
	}
	check_stack(&stack_a, &stack_b, argc);
	free(stack_a);
	free(stack_b);
	return (1);
}
