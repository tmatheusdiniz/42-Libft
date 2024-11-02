/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:22:41 by mreinald          #+#    #+#             */
/*   Updated: 2024/10/27 20:07:40 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i --;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i ++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	volatile char	*dest = (char *)0x1000;
	volatile char	*src = (char *)0x1005;
	const char *string = "Hello world";
    size_t len = strlen(string);
    for (size_t i = 0; i < len + 1; i++) 
	{
        *(char *)(src + i) = string[i];
    }
	printf("Src before: %s\n", src);
	ft_memmove(dest, src, 7);
	printf("Dest: %s\n", dest);
	printf("Src after: %s\n", src);
}
*/
