/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 13:53:36 by rgallard          #+#    #+#             */
/*   Updated: 2022/09/20 12:44:40 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Adds the node ’new’ at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final_elem;

	if (lst)
	{
		final_elem = *lst;
		if (!*lst)
			*lst = new;
		else
		{
			final_elem = ft_lstlast(*lst);
			final_elem->next = new;
			new->next = NULL;
		}
	}
}
