/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:28:20 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/01 19:13:35 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n -- > 0 && *(char *)s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		n --;
		s ++;
	}
	return (NULL);
}

int	main(void)
{
    char        *t;
    const char  *p = "pointer.";
   
	t = ft_memchr(p, 46, 9);
	printf("byte found: %s\n", t);
}
//
