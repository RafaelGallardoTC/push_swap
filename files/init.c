/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:22:46 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/05 22:05:45 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_init(t_stack **st, int len)
{
	*st = stack_new(len);
	if (!*st)
		exit(-1);
}

void	fill_stack(t_stack **st, int len, int *nb_arr)
{
	int	i;

	i = 0;
	while (i < len)
	{
		(*st)->next = stack_new((nb_arr[i]));
		i++;
		printf("*** %d ***", (*st)->value);
	}
}
