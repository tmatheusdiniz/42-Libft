/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:37:06 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/05 20:03:05 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*strjoin;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	strjoin = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (!strjoin)
		return (NULL);
	while (*s1)
		strjoin[i++] = *s1++;
	while (*s2)
		strjoin[i++] = *s2++;
	strjoin[i] = '\0';
	return (strjoin);
}
/*
int	main(void)
{
	char	*test = "Hello";
	char	*test2 = "World";

	printf("Result : %s\n", ft_strjoin(test, test2));
}
*/
