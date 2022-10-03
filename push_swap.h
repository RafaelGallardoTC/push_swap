/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:20:30 by rgallard          #+#    #+#             */
/*   Updated: 2022/10/03 19:08:57 by rgallard         ###   ########.fr       */
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

int			check_duplicates(int *nb_arr, int len);
int			char_to_int_array(char **src, int *dest);
int			do_sa(int *sa, int sa_len);
int			do_sb(int *sb, int sb_len);
int			is_sorted(t_stack *stack);
t_stack		*stack_new(int value);

#endif
