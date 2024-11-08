/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:48:00 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/08 14:49:14 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)malloc((strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i ++;
	}
	result[i] = '\0';
	return (result);
}
/*
static char	mapi(unsigned int index, char c)
{
	if (index % 2 == 0)
		c += 2;
	else
		c += 1;
	return (c);
}

int	main(void)
{
	char	*test = "ForTesting";
	char	*result;

	result = ft_strmapi(test, &mapi);
	printf("Result : %s\n", result);
}
*/
