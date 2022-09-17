`#include "../push_swap.h"

/* sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements */
int	sa_ops(int *sa, int sa_len)
{
	int	tmp;

	if (sa_len < 2)
		return (-1);
	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	return (0);
}

/* sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements. */
int	sb_ops(int *sb, int sb_len)
{
	int	tmp;

	if (sb_len < 2)
		return (-1);
	tmp = sb[0];
	sb[0] = sb[1];
	sb[1] = tmp;
	return (0);
}

/* ss : sa and sb at the same time. */
int	ss_ops(t_stacks *st)
{
	if (sa_ops(st->stack_a, st->sa_len) == -1)
		return (-1);
	if (sb_ops(st->stack_b, st->sb_len) == -1)
		return (-1);
	return (0);
}

/*
* pa (push a): Take the first element at the top of b and put it at the top of a.
* Do nothing if b is empty.
*/
/*int	pa_ops(t_stacks *st)
{
	 resize st->stack_a to have space for 1 item more.
		move all items back and leave index 0 blank.
	move st->stack_b[0] to st_stack_a[0].
	resize and delete st->stack_b[0]

}*/


/*
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
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
