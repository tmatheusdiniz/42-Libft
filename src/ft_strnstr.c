/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:32:25 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/03 16:35:34 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if ((!big || !little) && len == 0)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big != '\0' && len -- > 0 && i < little - little_len)
	{
		if (*big == *little)
			if (!ft_memcmp(big, little, little_len))
				return (big);
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