/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:27:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/09/17 18:32:21 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		len;
	int		*stack_a;

	i = 1;
	len = argc - 1;
	if (argc <= 1)
		return (-1);
	stack_a = (int *)malloc(len * sizeof(*stack_a));
	if (!stack_a)
		return (-1);
	if (char_to_int_array(&argv[1], stack_a) == -1)
	{
		printf("Error\n");
		exit(-1);
	}
	if (sa_ops(stack_a, len) == -1)
		return (-1);
	if (check_duplicates(stack_a, len) == 0)
		printf("Nice!!!\n");
	else
		printf("Duplicates are not allowed!!!\n");
	free(stack_a);
	return (0);
}
