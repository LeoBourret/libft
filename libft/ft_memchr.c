#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n && ptr[i] != c)
		i++;
	if (ptr[i] == c)
		return (ptr);
	return (NULL);
}
