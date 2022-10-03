/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:10:39 by rgallard          #+#    #+#             */
/*   Updated: 2022/09/20 14:01:18 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Iterates the list ’lst’ and applies the function ’f’ on the content
* of each node. Creates a new list resulting of the successive applications
* of the function ’f’. The ’del’ function is used to delete the content of
* a node if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*start;

	if (lst && f)
	{
		tmp = lst;
		start = ft_lstnew(f(tmp->content));
		if (!start)
			return (NULL);
		tmp = tmp->next;
		while (tmp)
		{
			new = ft_lstnew(f(tmp->content));
			if (!new)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			ft_lstadd_back(&start, new);
			tmp = tmp->next;
		}
		return (start);
	}
	return (NULL);
}
