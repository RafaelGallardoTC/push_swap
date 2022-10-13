/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:04:06 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/13 22:09:34 by rgallard         ###   ########.fr       */
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
