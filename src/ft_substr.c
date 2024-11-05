/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:30:32 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/05 20:25:20 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_size;
	char	*substr;

	str_size = ft_strlen(s);
	if (start > str_size)
		return (ft_strdup(""));
	if (len > str_size - start)
		len = str_size - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*
int	main(void)
{
	const char	*test = "Hello World!";
	char		*substr;
	substr = ft_substr(test, 7, 5);
	printf("substr: %s\n", substr);
}
*/
