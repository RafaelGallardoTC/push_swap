/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:26:58 by rgallard          #+#    #+#             */
/*   Updated: 2022/09/20 13:05:59 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_duplicates(int *nb_arr, int len)
{
	int	i;
	int	j;
	int	*arr_1;

	i = 0;
	arr_1 = nb_arr;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr_1[i] == arr_1[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	char_to_int_array(char **src, int *dest)
{
	int	i;
	int	tmp;

	i = 0;
	if (!ft_all_numbers(src))
		return (-1);
	while (src[i])
	{
		tmp = ft_atoi(src[i]);
		if (tmp == 0 && src[i][0] != '0')
			return (-1);
		else if (tmp == -1)
		{
			if ((src[i][0] == '-') && (src[i][1] == '1') && !src[i][2])
				dest[i] = tmp;
			else
				return (-1);
		}
		else
			dest[i] = tmp;
		i++;
	}
	return (0);
}

/* is_sorted:
*	Checks if a stack is sorted.
*	Returns 0 if the stack is not sorted, 1 if it is sorted.
*/
/*
int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
*/
/* push_swap:
*	Chooses a sorting method depending on the number
*	of values to be sorted.
*/
/*
static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
		do_sa(stack_a);
	else if (stack_size == 3)
		tiny_sort(stack_a);
	else if (stack_size > 3 && !is_sorted(*stack_a))
		sort(stack_a, stack_b);
}
*/
