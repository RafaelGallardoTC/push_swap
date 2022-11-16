/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:27:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/16 14:01:51 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	int			len;
	int			*arr_a;
	t_stack		*stack_a;
	//t_stack		*stack_b;

	i = 1;
	len = argc - 1;
	if (argc <= 1)
		return (-1);
	arr_a = (int *)malloc(len * sizeof(*arr_a));
	if (!arr_a)
		return (-1);
	convert_arr(&argv, &arr_a);
	check_duplicates(arr_a, len);
	insertion_sort(arr_a, len);
	stack_init(&stack_a, len);
	fill_stack(&stack_a, len, arr_a);
	free(arr_a);
	return (0);
}
