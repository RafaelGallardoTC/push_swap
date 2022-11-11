/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:47:04 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/11 14:26:07 by rgallard         ###   ########.fr       */
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
	*st = tmp->next;
	tmp->next = NULL;
	last_node = ft_last_node(*st);
	last_node->next = tmp;
}

/*
*	rb (rotate b): Shift up all elements of stack b by 1.
* The first element becomes the last one.
*/
void	do_rb(t_stack **st)
{
	do_ra(st);
}

/*
* rr : ra and rb at the same time.
*/
void	do_rr(t_stack **st_a, t_stack **st_b)
{
	do_ra(st_a);
	do_ra(st_b);
}

/*
*	rra (reverse rotate a): Shift down all elements of stack a by 1.
* The last element becomes the first one.
*/
void	do_rra(t_stack **st)
{
	t_stack	*tmp;
	t_stack	*last_node;
	t_stack	*to_be_last;

	to_be_last = ft_before_last_node(*st);
	to_be_last->next = NULL;
	last_node = ft_last_node(*st);
	tmp = *st;
	*st = last_node;
	last_node->next = tmp->next;
}


/*
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.

*/
