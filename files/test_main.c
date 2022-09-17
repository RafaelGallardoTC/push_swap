/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:27:03 by rgallard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/14 20:14:01 by rgallard         ###   ########.fr       */
=======
/*   Updated: 2022/09/05 09:59:11 by rgallard         ###   ########.fr       */
>>>>>>> 45a74e976553562497aaeed1ed568fc6eb877394
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	int			len;
	t_stacks	st;
<<<<<<< HEAD
	t_list		*stack_a;
	//t_list		*stack_b;
=======
>>>>>>> 45a74e976553562497aaeed1ed568fc6eb877394

	i = 1;
	len = argc - 1;
	if (argc <= 1)
		return (-1);
	/* Creation of b_stack must be modified */
	st.stack_a = (int *)malloc(len * sizeof(*st.stack_a));
	st.stack_b = (int *)malloc(len * sizeof(*st.stack_b));
	if (!st.stack_a || !st.stack_b)
		return (-1);
	if (char_to_int_array(&argv[1], st.stack_a) == -1)
	{
		printf("Error\n");
		exit(-1);
	}
<<<<<<< HEAD

	stack_a = ft_lstnew(&len);
	printf("------- %p -------", stack_a->content);
	exit(0);


=======
>>>>>>> 45a74e976553562497aaeed1ed568fc6eb877394
	while (argv[i])
	{
		printf("%d		%s\n", st.stack_a[i - 1], argv[i]);
		i++;
	}
	printf("-------- %d --------\n", len);
<<<<<<< HEAD
=======
	if (sa_ops(st.stack_a, len) == -1)
		return (-1);
>>>>>>> 45a74e976553562497aaeed1ed568fc6eb877394
	i = 0;
	while (i < len)
		printf("%d ", st.stack_a[i++]);

	if (check_duplicates(st.stack_a, len) == 0)
		printf("Nice!!!\n");
	else
		printf("Duplicates are not allowed!!!\n");

	free(st.stack_a);
	return (0);
}
