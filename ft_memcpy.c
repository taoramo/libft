#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (!dst && !src)
		return (dst);
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
