/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:32:25 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/08 21:39:55 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if ((!big || !little) && len == 0)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big != '\0' && len -- > 0 && i < len - little_len)
	{
		if (*big == *little)
			if (!ft_memcmp(big, little, little_len))
				return ((char *)big);
		big ++;
	}
	return (NULL);
}
/*
int	main(int c, char **v)
{
	(void)c;

	printf("Result : %s\n", ft_strnstr(
	(const char *)v[1], (const char *)v[2], atoi(v[3])));
}
*/
