/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:18:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/05 19:09:53 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	convert_arr(char ***src, int **dest)
{
	if (char_to_int_array(&src[0][1], *dest) == -1)
	{
		printf("Error\n");
		exit(-1);
	}
}
