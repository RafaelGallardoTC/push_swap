/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:27:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/21 13:26:09 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* !!!!!!!!!!!!!! MUST CHANGE PRINTF LIB */

/*
static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
		do_sa(stack_a);
	else if (stack_size == 3)
		tiny_sort(stack_a);
	else if (stack_size > 3 && !is_sorted(*stack_a))
		sort(stack_a, stack_b);
}*/

int	main(int argc, char **argv)
{
	int			list_b[5] = {3, 13, 15, 17, 21};
	//int			list_b[0];
	int			i;
	t_stacks	st;
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_stack		*tmp;
	t_stack		*tmp_b;
	t_utils		st_utils;

	if (argc <= 1)
		return (-1);
	i = 1;
	st_utils.stack_a_len = argc - 1;
	st_utils.stack_b_len = 5;
	st.stack_a = (int *)malloc(st_utils.stack_a_len * sizeof(*st.stack_a));
	if (!st.stack_a)
		return (-1);
	convert_arr(&argv, &st.stack_a);
	insertion_sort(st.stack_a, st_utils.stack_a_len);
	stack_init(&stack_a, st_utils.stack_a_len);
	fill_stack(&stack_a, st_utils.stack_a_len, st.stack_a);
	/*	stack B TEMP	*/
	stack_init(&stack_b, st_utils.stack_b_len);
	fill_stack(&stack_b, st_utils.stack_b_len, list_b);
	sort(&stack_a, &stack_b, &st_utils);
	//swap_nodes(&stack_a, 2, 4, st_utils.stack_a_len);
	/* ****************	*/
	tmp = stack_a;
	tmp_b = stack_b;
	while (argv[i] && tmp)
	{
		if (i == 1)
			printf("Arguments:		Sorted Arr of int:		stack_a.value		stack_b.value\n");
		printf("%s				%d			", argv[i], st.stack_a[i - 1]);
		if (tmp_b)
		{
			printf("%d			%d\n", tmp->value, tmp_b->value);
			tmp_b = tmp_b->next;
		}
		else
			printf("%d\n", tmp->value);
		tmp = tmp->next;
		i++;
	}
	if (is_sorted(stack_a))
	{
		printf("-------- %d --------\n", st_utils.stack_a_len);
		printf("SORTED LIST\n");
	}
	else
		printf("NOT SORTED!!!\n");
	i = 0;
	while (i < st_utils.stack_a_len)
		printf("%d ", st.stack_a[i++]);
	check_duplicates(st.stack_a, st_utils.stack_a_len);
	free(st.stack_a);
	return (0);
}
