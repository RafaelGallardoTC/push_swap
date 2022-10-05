/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:27:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/05 19:10:06 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* !!!!!!!!!!!!!! MUST CHANGE PRINTF LIB */

int	main(int argc, char **argv)
{
	int			i;
	int			len;
	t_stacks	st;

	i = 1;
	len = argc - 1;
	if (argc <= 1)
		return (-1);
	st.stack_a = (int *)malloc(len * sizeof(*st.stack_a));
	if (!st.stack_a)
		return (-1);
	convert_arr(&argv, &st.stack_a);
	while (argv[i])
	{
		printf("%d		%s\n", st.stack_a[i - 1], argv[i]);
		i++;
	}
	printf("-------- %d --------\n", len);
	i = 0;
	while (i < len)
		printf("%d ", st.stack_a[i++]);
	check_duplicates(st.stack_a, len);
	free(st.stack_a);
	return (0);
}
