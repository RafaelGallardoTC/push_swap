/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:22:46 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/27 21:10:33 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	Creates the first node of a linked list.
*/
void	stack_init(t_stack **st, int len)
{
	*st = stack_new(len);
	if (!*st)
		exit(-1);
}

void	fill_stack(t_stack **st, int len, int *nb_arr)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *st;
	tmp->value = nb_arr[i++];
	while (i < len && len > 1)
	{
		tmp->index = i;
		tmp->next = stack_new((nb_arr[i++]));
		tmp = tmp->next;
	}
	tmp->index = i;
}
