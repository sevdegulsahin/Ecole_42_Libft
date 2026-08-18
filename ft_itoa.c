#include "libft.h"

static int	ft_counter(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		count += 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nb;
	int			counter;
	char		*array;

	i = 0;
	nb = n;
	counter = ft_counter(nb);
	array = (char *)malloc((sizeof(char) * (counter + 1)));
	if (!array)
		return (NULL);
	array[counter] = '\0';
	if (nb < 0)
	{
		array[0] = '-';
		nb = -nb;
		i++;
	}
	while (i < counter)
	{
		array[counter - 1] = ((nb % 10) + '0');
		nb = nb / 10;
		counter--;
	}
	return (array);
}
