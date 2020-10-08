#include "libft.h"

int		ft_len(long nb)
{
	int len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		nbr;
	size_t		len;
	char		*res;

	len = ft_len(n);
	if (!(res = malloc(sizeof(char) * len + 1)))
		return (NULL);
	res[len--] = '\0';
	nbr = n;
	if (n < 0)
	{
		res[0] = '-';
		nbr = n * -1;
	}
	while (nbr > 0)
	{
		res[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}
