#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a == '\0' && *s == 0)
		return ((char *)s);
	while (*s)
	{
		if (*s == a)
			return ((char *)s);
		s++;
	}
	if (*s == 0 && a == '\0')
		return ((char *)s);
	return (0);
}
