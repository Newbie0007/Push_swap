/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 14:49:00 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/27 14:49:02 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int         main(int argc, char **argv)
{
    char		*line;
	t_checker	*pen;
    int i;
	
	if (!(pen = ft_memalloc(sizeof(t_checker))))
		return (-1);
    i = 0;
    while (argv[++i] != NULL)
    
	while (1)
	{
		if (get_next_line(0, &line) == 0)
			break ;
        printf("line %s\n", line);
	}
    printf("line %s\n", line);
	free(line);
	free(pen);
    return (0);
}