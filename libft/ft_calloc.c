/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 22:28:05 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/08 16:15:58 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The calloc() function contiguously allocates enough space for count
** objects that are size bytes of memory each and returns a pointer to the
** allocated memory. The allocated memory is filled with bytes of
** value zero.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*spc;
	size_t	len;

	len = count * size;
	spc = malloc(len);
	if (!spc)
		return (NULL);
	ft_bzero(spc, len);
	return (spc);
}
