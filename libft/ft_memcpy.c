/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:45:34 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/08 18:27:35 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The memcpy() function copies n bytes from memory area src to memory area dst.
**	If dst and src overlap, behavior is undefined.
**	Applications in which dst and src might overlap should use memmove(3) instead.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (d != NULL || s != NULL)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	return (dst);
}
