/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:08:18 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/20 22:38:06 by rgallard         ###   ########.fr       */
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
**	Iterates through the list and swap the place of node a for node b.
**	idx = index, idxa = index a.
*/
int	lst_swap_nodes(t_stack **st, int x, int y, int len)
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
	/*if (x == y || x < 0 || y < 0
		|| x >= len || y >= len || !st)
		return (-1);*/
	while (i != x && i < len)
	{
		prev_x = curr_x;
		curr_x = curr_x->next;
	}
	i = 0;
	while (i != y && i < len)
	{
		prev_y = curr_y;
		curr_y = curr_y->next;
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



	/*while (i < len)
	{
		if (i == x - 1)
			prev_x = tmp;
		else if (i == x)
			curr_x = tmp;
		else if (i == y - 1)
			prev_y = tmp;
		else if (i == y)
			curr_y = tmp;
		tmp = tmp->next;
		i++;
	}
	if (x != 0)
	{
		tmp = curr_y->next;
		prev_x->next = curr_y;
		prev_y->next = curr_x;
		curr_y->next = curr_x->next;
		curr_x->next = tmp;
	}
	else if (x == 0)
	{
		tmp = curr_x->next;
		curr_x->next = curr_y->next;
		prev_y->next = curr_x;
		curr_y->next = tmp;
		*st = curr_y;
	}
	else if (x == 0 && y == 1)
	{
		tmp = curr_x;
		*st = curr_y;
		curr_x->next = curr_y->next;
		curr_y->next = tmp;
	}*/
	return (0);
}


/*
		E			B
	A	B	C	D	E	F	G
	1	2	3	4	5	6	7

	cambiando b x e
	a.next(B) = d.next(E)
	e.next(F) = b.next(C)
	b.next(C) = e.next(F)

*/
