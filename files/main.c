/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:27:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/08/05 21:40:02 by rgallard         ###   ########.fr       */
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
	char_to_int_array(argv, stack_a);
	while (argv[i])
	{
		printf("%d		%s\n", stack_a[i], argv[i]);
		i++;
	}
	printf("-------- %d --------", len);
	free(stack_a);
	return (0);
}
