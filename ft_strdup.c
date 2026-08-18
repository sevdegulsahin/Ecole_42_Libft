#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*array;

	i = 0;
	array = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (array == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
