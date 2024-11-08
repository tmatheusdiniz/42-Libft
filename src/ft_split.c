/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:10:33 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/08 14:50:45 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (flag)
				flag = 0;
		}
		else
		{
			if (!flag)
			{
				flag = 1;
				count ++;
			}
		}
		i ++;
	}
	return (count);
}

static char	*insert_words(char const *s, char c)
{
	int		i;
	char	*insert;

	i = 0;
	while (s[i] && s[i] != c)
		i ++;
	insert = (char *)malloc((i + 1) * sizeof(char));
	if (!insert)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		insert [i] = s[i];
		i ++;
	}
	insert[i] = '\0';
	return (insert);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**matrix;

	i = count_words(s, c);
	matrix = (char **)malloc(sizeof(char *) * (i + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			matrix[i] = insert_words(s, c);
			while (*s && *s != c)
				s ++;
			i ++;
		}
		else
			s ++;
	}
	matrix[i] = 0;
	return (matrix);
}

int	main(int c, char **v)
{
	int		i;
	char	**matrix;

	i = 0;
	if (c > 3)
		return (0);
	matrix = ft_split(v[1], v[2][0]);
	if (matrix == NULL)
		return (1);
	while (matrix[i])
	{
		printf("substring : %s\n", matrix[i]);
		i ++;
	}
	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i ++;
	}
	free(matrix);
}
