/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:41:04 by mreinald          #+#    #+#             */
/*   Updated: 2024/10/27 21:12:22 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s ++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
	const char	*s = "Hello World!";
	char	chr = '\0';
	char	*test;
	test = ft_strchr(s, chr);
	printf("test : %s\n", test);
}
*/