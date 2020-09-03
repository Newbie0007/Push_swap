/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 17:02:47 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 17:02:55 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct		s_swap
{
	int				data;
	int				length;
	struct s_swap	*next;
}					t_swap;

void				sa(t_swap **stack_a);
void				sb(t_swap **stack_b);
void				ss(t_swap **stack_a, t_swap **stack_b);
void				pa(t_swap **stack_a, t_swap **stack_b);
void				pb(t_swap **stack_a, t_swap **stack_b);
void				ra(t_swap **stack_a);
void				rb(t_swap **stack_b);
void				rr(t_swap **stack_a, t_swap **stack_b);
void				rra(t_swap **stack_a);
void				rrb(t_swap **stack_b);
void				rrr(t_swap **stack_a, t_swap **stack_b);
t_swap				*new_link(t_swap *link, int num);
t_swap				*create_stack(t_swap **link, int num);
void				print_stack(t_swap **stack_a);
void				check_stack(t_swap **stack_a, t_swap **stack_b, int argc);
void				compare(t_swap **stack_a, t_swap **stack_b, char *line);
int					arguments(char **argv);
int					getlength(t_swap *stack_a);
int					ft_min(int *tab, unsigned int len);
void				reading(t_swap *stack_a, t_swap *stack_b);
int					check_status(t_swap **stack_a);
int					arguments(char **argv);
void				swap_stack(t_swap *stack_a, t_swap *stack_b);
void				swaps_stack5(t_swap *stack_a, t_swap *stack_b);
void				swaps_stack100(t_swap *stack_a, t_swap *stack_b);

#endif
