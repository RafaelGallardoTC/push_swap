/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:45:24 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/08 15:23:59 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strlcpy() function copy and concatenate strings with the same input
** parameters and output result as snprintf(3). It is designed to be safer,
** more consistent, and less error prone replacements for the easily misused
** functions strncpy(3) and strncat(3).
**	strlcpy() takes the full size of the destination buffer and guarantee
** NUL-termination if there is room.
** Note that room for the NUL should be included in dstsize.
** If the src and dst strings overlap, the behavior is undefined.
*/
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	const char	*s;
	size_t		n;

	s = src;
	n = dstsize;
	if (!(dst && src))
		return (0);
	if (n != 0)
	{
		while (--n != 0)
		{
			*dst++ = *s++;
			if (*dst == 0)
				break ;
		}
	}
	if (n == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
