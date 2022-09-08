/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:14:02 by rgallard          #+#    #+#             */
/*   Updated: 2022/08/06 15:19:38 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_all_numbers(char **nb_str)
{
	int		i;
	int		j;

	i = 0;
	while (nb_str[i])
	{
		j = 0;
		while (nb_str[i][j])
		{
			if (ft_isdigit(nb_str[i][j]) || (nb_str[i][j] == '-' &&
				ft_isdigit(nb_str[i][j + 1])) || (nb_str[i][j] == '+' &&
					ft_isdigit(nb_str[i][j + 1])))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}
