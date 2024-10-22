/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:03:24 by mreinald          #+#    #+#             */
/*   Updated: 2024/10/22 21:39:00 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*m;

	m = s;
	while (n -- > 0)
		*m ++ = (unsigned char) c;
	return (s);
}
/*
int main(void)
{
    int test[5];
    int *pointer;

    pointer = ft_memset(test, 300, sizeof(test));
    printf("Result = %i\n", test[0]);
}
*/