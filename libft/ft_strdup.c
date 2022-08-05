/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:07:02 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/08 16:27:45 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		++size;
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	new[i] = s1[i];
	while (new[i])
	{
		i++;
		new[i] = s1[i];
	}
	new[i] = '\0';
	return (new);
}
