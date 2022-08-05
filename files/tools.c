/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:26:58 by rgallard          #+#    #+#             */
/*   Updated: 2022/08/05 21:40:39 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_duplicates(int *nb_arr)
{
	int	i;
	int	j;
	int	*arr_1;
	int	*arr_2;

	i = 0;
	arr_1 = nb_arr;
	arr_2 = nb_arr;
	while (arr_1[i])
	{
		j = i + 1;
		while (arr_1[j])
		{
			if (arr_1[i] == arr_1[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

void	char_to_int_array(char **src, int *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = ft_atoi(src[i]);
		i++;
	}
}
