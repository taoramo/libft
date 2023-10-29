#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;

	cpy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (cpy == 0)
		return (0);
	ft_strlcpy(cpy, src, (ft_strlen(src) + 1));
	return (cpy);
}
/*
int	main(void)
{
	char	str[8] = "";

	printf("%s", ft_strdup(str));
}*/
