#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t size)
{
	size_t len_src;
	size_t i;

	len_src = ft_strlen(src);
	i = -1;
	while (++i < size - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (len_src);
}
