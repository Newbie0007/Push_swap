/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 14:49:00 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 16:19:18 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_list.h"

void	check_stack(t_swap **stack_a, int argc)
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
		ft_putendl("OK");
	else
		ft_putendl("KO");
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

void fun(void) 
{
   ft_putstr("Exiting"); 
} 
int		main(int argc, char **argv)
{
	int		i;
	int		num;
	t_swap	*stack_a;
	t_swap	*stack_b;
	char	*str;

	i = 0;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		argv = returns(&argc, argv);
	if (arguments(argv) == 0)
		return (0);
	while (argv[++i] != '\0')
	{
		num = ft_atoi(argv[i]);
		stack_a = create_stack(&stack_a, num);
	}
	reading_doubles(&stack_a);
	while (get_next_line(0, &str))
		compare(&stack_a, &stack_b, str);
	check_stack(&stack_a, argc);
	free(stack_a);
	free(stack_b);
	return (0);
}