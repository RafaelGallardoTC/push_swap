/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:27:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/03 14:28:27 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* !!!!!!!!!!!!!! MUST CHANGE PRINTF LIB */

int	main(int argc, char **argv)
{
	int			list_b[5] = {11, 13, 15, 17, 21};
	int			i;
	int			len;
	int			len_b;
	t_stacks	st;
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_stack		*tmp;
	t_stack		*tmp_b;

	i = 1;
	len = argc - 1;
	len_b = 5;
	if (argc <= 1)
		return (-1);
	st.stack_a = (int *)malloc(len * sizeof(*st.stack_a));
	if (!st.stack_a)
		return (-1);
	convert_arr(&argv, &st.stack_a);
	insertion_sort(st.stack_a, len);
	stack_init(&stack_a, len);
	fill_stack(&stack_a, len, st.stack_a);
	/*	stack B TEMP	*/
	stack_init(&stack_b, len_b);
	fill_stack(&stack_b, len_b, list_b);
	do_pa(&stack_a, &stack_b, &len, &len_b);
	/* ****************	*/
	tmp = stack_a;
	tmp_b = stack_b;
	while (argv[i] && tmp)
	{
		printf("%d		%s		", st.stack_a[i - 1], argv[i]);
		printf("%d		%d\n", tmp->value, stack_b->value);
		tmp = tmp->next;
		if (tmp_b)
			tmp_b = tmp->next;
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
