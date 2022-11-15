/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:32:21 by rgallard          #+#    #+#             */
/*   Updated: 2022/11/15 23:36:24 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
*	rrr : rra and rrb at the same time.
*/
void	do_rrr(t_stack **st_a, t_stack **st_b)
{
	do_rra(st_a);
	do_rrb(st_b);
}
