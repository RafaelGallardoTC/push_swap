/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:20:30 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/25 13:34:21 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>

typedef struct s_stacks
{
	int	*stack_a;
	int	*stack_b;
	int	sa_len;
	int	sb_len;
}	t_stacks;

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;

}	t_stack;

typedef struct s_tmp_lst
{
	int		i;
	t_stack	*tmp;
	t_stack	*curr_x;
	t_stack	*curr_y;
	t_stack	*prev_x;
	t_stack	*prev_y;

}	t_tmp_lst;

void		convert_arr(char ***src, int **dest);
void		check_duplicates(int *nb_arr, int len);
int			char_to_int_array(char **src, int *dest);
int			do_sa(int *sa, int sa_len);
int			do_sb(int *sb, int sb_len);
int			is_sorted(t_stack *stack);
t_stack		*stack_new(int value);
void		stack_init(t_stack **st, int len);
void		fill_stack(t_stack **st, int len, int *nb_arr);
void		insertion_sort(int *arr, int size);
int			swap_nodes(t_stack **st, int index_a, int index_b, int len);

#endif
