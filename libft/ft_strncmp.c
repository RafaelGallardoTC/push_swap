/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:38:32 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/08 16:54:18 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strncmp() function compares not more than n characters.
** Because strncmp() is designed for comparing strings rather than binary data,
** characters that appear after a `\0' character are not compared.
** The strncmp() returns an integer greater than, equal to, or less than 0,
** according as the string s1 is greater than, equal to, or less than the
** string s2.  The comparison is done using unsigned characters, so that
** `\200' is greater than `\0'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			if (*(unsigned char *)s1 < *(unsigned char *)s2)
				return (-1);
			else
				return (1);
		}
		else if (*s1 == '\0')
			return (0);
		++s1;
		++s2;
		--n;
	}
	return (0);
}
