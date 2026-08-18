/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdsahi <sevdsahi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 13:58:51 by sevdsahi          #+#    #+#             */
/*   Updated: 2026/08/18 14:18:59 by sevdsahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	array = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}
