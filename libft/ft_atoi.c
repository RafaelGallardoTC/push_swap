/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:02:51 by rgallard          #+#    #+#             */
/*   Updated: 2022/08/10 18:28:25 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

/* The atoi() function converts the initial portion of the string
*	pointed to by str to int representation.
*/
int	ft_atoi(const char *str)
{
	long int	n;
	long int	isneg;

	isneg = 1;
	n = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		isneg = 1 - 2 * (*str++ == '-');
	while (*str != '\0' && ft_isdigit(*str))
	{
		n = n * 10 + (*str++ - 48);
		if (n * isneg > 2147483647)
			return (-1);
		else if (n * isneg < -2147483648)
			return (0);
	}
	if (isneg)
		return (n * isneg);
	else
		return (n);
}
