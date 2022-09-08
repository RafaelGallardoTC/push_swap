/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:20:30 by rgallard          #+#    #+#             */
/*   Updated: 2022/09/05 09:39:56 by rgallard         ###   ########.fr       */
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
}				t_stacks;

int		check_duplicates(int *nb_arr, int len);
int		char_to_int_array(char **src, int *dest);
int		sa_ops(int *sa, int sa_len);
int		sb_ops(int *sb, int sb_len);

#endif
