/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:10:03 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/08 16:48:00 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are
** searched.  Characters that appear after a `\0' charac-ter are not searched.
** Since the strnstr() function is a FreeBSD specific API, it should only be
** used when portability is not a concern.
** If needle is an empty string, haystack is returned; if needle occurs
** nowhere in haystack, NULL is returned; otherwise a pointer to the first
** character of the first occurrence of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	n_len = ft_strlen((char *)needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len-- >= n_len)
	{
		if (0 == ft_strncmp(haystack, needle, n_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
