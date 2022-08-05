/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 05:57:24 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/08 16:18:27 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long. The memcmp() function returns
** zero if the two strings are identical, otherwise returns the difference
** between the first two differing bytes (treated as unsigned char values,
** so that `\200' is greater than `\0', for example).  Zero-length strings
** are always identical.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p_s1++ != *p_s2++)
			return (*--p_s1 - *--p_s2);
	}
	return (0);
}
