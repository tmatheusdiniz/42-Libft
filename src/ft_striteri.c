/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:26:39 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/08 14:48:13 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i ++;
	}
}
/*
void	iteri(unsigned int index, char *s)
{
	if (index % 2 == 0)
		*s += 2;
	else
		*s += 1;
}

int	main(void)
{
	char	*s;
	s[0] = 'H';
	s[1] = 'E';
	s[2] = '\0';
	printf("s before : %s\n", s);
	ft_striteri(s, &iteri);
	printf("s after : %s\n", s);
}
*/
