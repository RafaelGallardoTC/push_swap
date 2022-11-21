/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:04:06 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/21 13:21:01 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insertion_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	key;

	i = 1;
	while (i < size)
	{
		j = i - 1;
		key = arr[i];
		while (j >= 0 && key < arr[j])
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		i++;
	}
}

int	sort(t_stack **stack_a, t_stack **stack_b, t_utils *st_utils)
{
	t_stack	*tmp;

	tmp = *stack_a;
	st_utils->half_stack_a = st_utils->stack_a_len / 2;

	while (tmp->next != NULL)
	{
		printf("%dHERE:    \n", tmp->value);
		if (tmp->value > st_utils->half_stack_a)
			break ;
		do_pb(stack_a, stack_b, &st_utils->stack_a_len, &st_utils->stack_b_len);
		tmp = tmp->next;
	}
	return (1);
}
