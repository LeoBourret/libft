#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = -1;
	while (ptr[++i] && i < n)
		ptr[i] = c;
	return (s);
}
