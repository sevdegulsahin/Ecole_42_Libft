#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	if (n == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
