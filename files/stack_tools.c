/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:08:18 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/19 14:21:57 by rgallard         ###   ########.fr       */
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
int	lst_swap_nodes(t_stack **st, int index_a, int index_b, int len)
{
	int		i;
	t_stack	*tmp;
	t_stack	*node_idxa;
	t_stack	*node_idxb;
	t_stack	*node_before_idxa;
	t_stack	*node_before_idxb;

	i = 0;
	tmp = *st;
	if (index_a == index_b || index_a < 0 || index_b < 0
		|| index_a >= len || index_b >= len || !st)
		return (-1);
	while (i < len)
	{
		if (i == index_a - 1)
			node_before_idxa = tmp;
		else if (i == index_a)
			node_idxa = tmp;
		else if (i == index_b - 1)
			node_before_idxb = tmp;
		else if (i == index_b)
			node_idxb = tmp;
		tmp = tmp->next;
		i++;
	}
	if (index_a != 0)
	{
		tmp = node_idxb->next;
		node_before_idxa->next = node_idxb;
		node_before_idxb->next = node_idxa;
		node_idxb->next = node_idxa->next;
		node_idxa->next = tmp;
	}
	else if (index_a == 0)
	{
		tmp = node_idxb->next;
		node_before_idxb->next = node_idxa;
		node_idxb = *st;
		//node_idxb->next = node_idxa->next;
		node_idxa->next = tmp;
	}
	return (1);
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
