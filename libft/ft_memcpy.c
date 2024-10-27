/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:35:15 by mreinald          #+#    #+#             */
/*   Updated: 2024/10/27 20:08:25 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i ++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*dest = malloc(6);
	char	*dest2 = malloc(6);
	char	*src = "Hello World!";
	char	*ptrnull = NULL;
	char	*ptrnull2 = NULL;
	dest = ft_memcpy(ptrnull, src, 6);
	printf("Dest: %s\n", dest);
	dest2 = memcpy(ptrnull2, src, 6);
	printf("Dest: %s\n", dest2);
}
*/