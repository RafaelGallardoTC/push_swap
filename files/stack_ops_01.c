/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:47:04 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/07 19:25:38 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	ra (rotate a): Shift up all elements of stack a by 1.
** The first element becomes the last one.
*/
void	do_ra(t_stack **st)
{
	t_stack	*tmp;
	t_stack	*last_node;

	tmp = *st;
	tmp->next = NULL;
	last_node = ft_last_node(*st);
	last_node->next = tmp;
	*st = (*st)->next;
}
