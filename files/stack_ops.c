/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:07:10 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/03 14:14:27 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements */
int	do_sa(t_stack **stack_a, int sa_len)
{
	return (swap_nodes(stack_a, 0, 1, sa_len));
}

/* sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements. */
int	do_sb(t_stack **stack_b, int sb_len)
{
	return (swap_nodes(stack_b, 0, 1, sb_len));
}

/* ss : sa and sb at the same time. */
int	do_ss(t_stack **st_a, t_stack **st_b, int sa_len, int sb_len)
{
	if (do_sa(st_a, sa_len) == -1)
		return (-1);
	if (do_sb(st_b, sb_len) == -1)
		return (-1);
	return (0);
}

/*
* pa (push a): Take the first element at the top of b and put it at the top of a.
* Do nothing if b is empty.
*/
int	do_pa(t_stack **st_a, t_stack **st_b, int *sa_len, int *sb_len)
{
	t_stack	*tmp;
	t_stack	*tmp_st_b;

	tmp = *st_a;
	tmp_st_b = (*st_b)->next;
	if (!st_a || !st_b || *sa_len < 1 || !*sb_len)
		return (-1);
	*st_a = *st_b;
	(*st_b)->next = tmp;
	*sa_len += 1;
	*st_b = tmp_st_b;
	*sb_len -= 1;
	return (0);
}

/*
** pb (push b): Take the first element at the top of a and put it at the top of b
** Do nothing if a is empty.
*/
int	do_pb(t_stack **st_a, t_stack **st_b, int *sa_len, int *sb_len)
{
	t_stack	*tmp;
	t_stack	*tmp_st_a;

	tmp = *st_b;
	tmp_st_a = (*st_a)->next;
	if (!st_a || !st_b || *sb_len < 1 || !*sa_len)
		return (-1);
	*st_b = *st_a;
	(*st_a)->next = tmp;
	*sb_len += 1;
	*st_a = tmp_st_a;
	*sa_len -= 1;
	return (0);
}


/*int	pa_ops(t_stacks *st)
{
	 resize st->stack_a to have space for 1 item more.
		move all items back and leave index 0 blank.
	move st->stack_b[0] to st_stack_a[0].
	resize and delete st->stack_b[0]

}*/

/*
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.

*/
