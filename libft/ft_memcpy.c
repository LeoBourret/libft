#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *ptr;

	ptr = (char*)dst;
	i = -1;
	while (++i < n)
	{
		*ptr = *(char *)src;
		ptr++;
		src++;
		i++;
	}
	return (dst);
}
