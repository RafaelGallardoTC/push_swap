/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:08:18 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/25 13:38:01 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

/*
**	Iterates through the list and swap the place of node x for node y.
**	Nodes positions starting at 0.
*/
int	swap_nodes(t_stack **st, int x, int y, int len)
{
	int		i;
	t_stack	*tmp;
	t_stack	*curr_x;
	t_stack	*curr_y;
	t_stack	*prev_x;
	t_stack	*prev_y;

	prev_x = NULL;
	curr_x = *st;
	prev_y = NULL;
	curr_y = *st;
	i = 0;
	tmp = *st;
	while (i != x && i < len)
	{
		prev_x = curr_x;
		curr_x = curr_x->next;
		i++;
	}
	i = 0;
	while (i != y && i < len)
	{
		prev_y = curr_y;
		curr_y = curr_y->next;
		i++;
	}
	if (curr_x == NULL || curr_y == NULL)
		return (-1);
	if (prev_x != NULL)
		prev_x->next = curr_y;
	else
		*st = curr_y;
	if (prev_y != NULL)
		prev_y->next = curr_x;
	else
		*st = curr_x;
	tmp = curr_y->next;
	curr_y->next = curr_x->next;
	curr_x->next = tmp;
	return (0);
}
