/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:27:16 by mreinald          #+#    #+#             */
/*   Updated: 2024/10/22 21:37:38 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen( const char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		count ++;
		s ++;
	}
	return (count);
}
/*
int	main(void)
{
	char *test = "Matheus Diniz";

	printf("Result : %zu\n", ft_strlen(test));
}
*/