/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:20:30 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/21 13:07:56 by rgallard         ###   ########.fr       */
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
	int				len;
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

typedef struct s_utils
{
	int	stack_a_len;
	int	stack_b_len;
	int	half_stack_a;
	int	half_stack_b;

}	t_utils;

void		convert_arr(char ***src, int **dest);
void		check_duplicates(int *nb_arr, int len);
int			char_to_int_array(char **src, int *dest);
int			do_sa(t_stack **stack_a, int sa_len);
int			do_sb(t_stack **stack_b, int sb_len);
int			do_ss(t_stack **st_a, t_stack **st_b, int sa_len, int sb_len);
int			do_pa(t_stack **st_a, t_stack **st_b, int *sa_len, int *sb_len);
int			do_pb(t_stack **st_a, t_stack **st_b, int *sa_len, int *sb_len);
void		do_ra(t_stack **st);
void		do_rb(t_stack **st);
void		do_rr(t_stack **st_a, t_stack **st_b);
void		do_rra(t_stack **st_a);
void		do_rrb(t_stack **st_b);
void		do_rrr(t_stack **st_a, t_stack **st_b);
int			is_sorted(t_stack *stack);
void		stack_init(t_stack **st, int len);
void		fill_stack(t_stack **st, int len, int *nb_arr);
void		insertion_sort(int *arr, int size);
int			swap_nodes(t_stack **st, int index_a, int index_b, int len);
int			sort(t_stack **stack_a, t_stack **stack_b, t_utils *st_utils);
t_stack		*stack_new(int value);
t_stack		*ft_last_node(t_stack *st);
t_stack		*ft_before_last_node(t_stack *st);

#endif
