/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdsahi <sevdsahi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 13:56:19 by sevdsahi          #+#    #+#             */
/*   Updated: 2026/08/18 14:28:41 by sevdsahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && count > (size_t)-1 / size)
		return (NULL);
	if (!count || !size)
		return (malloc(1));
	ptr = malloc(size * count);
	if (!(ptr))
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
