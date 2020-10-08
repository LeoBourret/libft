#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*ptr;
	size_t	i;

	i = -1;
	ptr = dest;
	while (*(char *)src && ++i < n)
	{
		*tmp = *(char *)src;
		tmp++;
		src++;
	}
	tmp[i] = '\0';
	i = 0;
	while (tmp[++i])
		ptr[i] = tmp[i];
	return (dest);
}
