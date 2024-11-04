/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:35:28 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/03 16:32:26 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 == *s2)
	{
		n --;
		s1 ++;
		s2 ++;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}

/*
int main(void)
{
    const char  *s1 = "Hello world!";
    const char  *s2 = "Hello z";
    
    printf("Result : %i\n", ft_strncmp(s1, s2, 7));
}
*/
