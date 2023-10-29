#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	return ((char *)ptr);
}
