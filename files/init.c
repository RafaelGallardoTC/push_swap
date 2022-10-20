/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:22:46 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/20 22:38:16 by rgallard         ###   ########.fr       */
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
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *st;
	tmp->value = nb_arr[i++];
	while (i < len)
	{
		tmp->index = i;
		tmp->next = stack_new((nb_arr[i++]));
		printf("*** %d ***\n", tmp->value);
		tmp = tmp->next;
	}
	printf("*** %d ***\n", tmp->value);
}
