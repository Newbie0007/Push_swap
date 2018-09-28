/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.data                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:29:12 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/10 17:23:34 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


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
	        i = 1;
	     }
	     pb(&stack_a, &stack_b);
	      temp = temp->next;
    }
    while (stack_b != NULL)
    	pa(&stack_a, &stack_b);
  }
}

void		sort(t_swap *stack_a, t_swap *stack_b, int length)
{
  int i;
  t_swap *temp;

  i = 0;
  temp = stack_a;
  stack_b = NULL;
  length = length + 2;
  //int p = 0;
	while (temp->next)
	{
    print_stack(&temp);
    printf("--->%i\n", temp->data);
			if (cake_swap(temp, temp) == 1 && i < 1)
				sa(&temp);
      if (temp->data > temp->next->data )
				ra(&temp);
      if (temp->data > temp->next->data )
				rra(&temp);
      i++;
      //printf("i = %d\n", i);
      temp = temp->next;
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
  {
    ft_putstr("Stack is sorted!!!\n");
    //print_stack(stack_a);
  }
  else
    sort(*stack_a, *stack_b, length);
}

int		main(int argc, char **av)
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
 // print_stack(&stack_a);
 // sa(&stack_a);
  //print_stack(&stack_a);
  ft_putchar('\n');
  return (0);
}