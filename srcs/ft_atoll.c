/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:10:40 by mreinald          #+#    #+#             */
/*   Updated: 2025/05/13 14:11:53 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static long long	check_size(long long number, char n, int sign)
{
	if (number > LLONG_MAX / 10)
	{
		if (sign == 1)
			return (LLONG_MAX);
		return (LLONG_MIN);
	}
	if (number == LLONG_MAX / 10 && (n  - '0') > (LLONG_MAX % 10))
	{
			if (sign == 1)
				return (LLONG_MAX);
			return (LLONG_MIN);
	}
	return (number);
}

long long	ft_atoll(const char *nptr)
{
	long long	number;
	int			sign;
	int			i;

	number = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(nptr[i]))
		i ++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i ++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		number = check_size(number, nptr[i], sign);
		if (number == LLONG_MAX || number == LLONG_MIN)
			return (number);
		number = number * 10 + (nptr[i++] - '0');
	}
	return (number * sign);
}
