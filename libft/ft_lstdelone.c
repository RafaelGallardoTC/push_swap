/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 14:10:19 by rgallard          #+#    #+#             */
/*   Updated: 2022/09/20 12:45:29 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Takes as a parameter a node and frees the memory of
* the node’s content using the function ’del’ given
* as a parameter and free the node. The memory of
* ’next’ must not be freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}
