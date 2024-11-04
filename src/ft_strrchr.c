/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:59:38 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/03 16:06:40 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s ++;
	}
	if (p != NULL)
		return (p);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
	const char	*s = "Hello World!";
	char	chr = 'o';
	char	*test;
	test = ft_strrchr(s, chr);
	printf("test : %s\n", test);
}
*/
