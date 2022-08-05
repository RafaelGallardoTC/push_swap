/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:30:24 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/08 16:36:04 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strchr() function locates the last occurrence of c
** (converted to a char) in the string pointed to by s. The terminating null
** character is considered to be part of the string; therefore if c is `\0',
** the functions locate the terminating `\0'.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	save = NULL;
	while (*s)
	{
		if (*s == (char)c)
			save = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (save);
}
