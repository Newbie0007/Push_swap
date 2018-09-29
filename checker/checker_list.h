/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_list.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 16:20:37 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/29 16:23:02 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_LIST_H
# define CHECKER_LIST_H
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct		s_swap
{
	int				data;
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
void				reverse(t_swap **headref);
void				check_stack(t_swap **stack_a, t_swap **stack_b, int argc);
int					cake_swap(t_swap *stack_a, t_swap *stack_b);
void				compare(t_swap **stack_a, t_swap **stack_b, char *line);
int					arguments(char **argv);
void				reading(t_swap *stack_a, t_swap *stack_b);

#endif
