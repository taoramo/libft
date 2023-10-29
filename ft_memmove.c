#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			tdst[len] = tsrc[len];
	return (dst);
}
