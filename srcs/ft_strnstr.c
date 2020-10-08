#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t len_s2;
	size_t i;

	i = -1;
	len_s2 = ft_strlen(s2);
	if (!s2)
		return ((char*)s1);
	while (s1[++i] && i < len)
		if (s1[i] == *s2 && ft_memcmp(&s1[i], s2, len_s2) == 0)
				return ((char*)&s1[i]);
	return (NULL);
}
