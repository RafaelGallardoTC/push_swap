/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:27:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/27 21:25:34 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* !!!!!!!!!!!!!! MUST CHANGE PRINTF LIB */

int	main(int argc, char **argv)
{
	int			i;
	int			len;
	t_stacks	st;
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_stack		*tmp;

	i = 1;
	len = argc - 1;
	if (argc <= 1)
		return (-1);
	st.stack_a = (int *)malloc(len * sizeof(*st.stack_a));
	if (!st.stack_a)
		return (-1);
	convert_arr(&argv, &st.stack_a);
	insertion_sort(st.stack_a, len);
	stack_init(&stack_a, len);
	fill_stack(&stack_a, len, st.stack_a);
	tmp = stack_a;
	while (argv[i])
	{
		printf("%d		%s		", st.stack_a[i - 1], argv[i]);
		printf("%d\n", tmp->value);
		tmp = tmp->next;
		i++;
	}
	printf("-------- %d --------\n", len);
	printf("SORTED LIST\n");
	i = 0;
	while (i < len)
		printf("%d ", st.stack_a[i++]);
	check_duplicates(st.stack_a, len);
	free(st.stack_a);
	return (0);
}
