#include "libft.h" 

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int		i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
		return (ft_strlen(src));
	}
	else
	{
		return (ft_strlen(src));
	}
}
/*
int	main(void)
{
	char	*src;
	char	dest[16];

	src = "asdfASDF";
	ft_strlcpy(dest, src, 4);
	write(1, dest, 16);
}*/
