/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdsahi <sevdsahi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 13:58:33 by sevdsahi          #+#    #+#             */
/*   Updated: 2026/08/18 14:22:21 by sevdsahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **s, int i)
{
	while (i--)
	{
		free(s[i]);
	}
	free(s);
	return (NULL);
}

static int	word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
		{
			count++;
		}
		s++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	array = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			array[i] = ft_substr(s, 0, word_len(s, c));
			if (!array[i])
				return (free_all(array, i));
			i++;
			s = s + word_len(s, c);
		}
	}
	array[i] = NULL;
	return (array);
}
