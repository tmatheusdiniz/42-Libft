/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:55:04 by mreinald          #+#    #+#             */
/*   Updated: 2024/10/22 19:20:09 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c < 0 || c > 126)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	unsigned char	a;

	a = 127;
	printf("%c\n", a);
}
*/