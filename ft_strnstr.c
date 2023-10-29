#include "libft.h"

const char	*ft_find(const char *str, const char *to_find, size_t len)
{
	int		n;
	int		result;
	size_t	i;

	i = 0;
	while (str[i] != 0 && i < len)
	{
		if (to_find[0] == str[i] && str[i] != to_find[n])
			result = i;
		if (str[i] == to_find[n] && to_find[n] != 0)
		{
			if (n == 0)
				result = i;
			n++;
			if (to_find[n] == 0)
				return (&str[result]);
		}
		i++;
		if (to_find[n] != str[i] && to_find[0] != str[i])
		{
			n = 0;
			result = 0;
		}
	}
	return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	if (to_find[0] == 0)
		return ((char *)str);
	if (len < 1)
		return (0);
	return ((char *)ft_find(str, to_find, len));
}
/*
void	ft_putstr(char *str)
{
	int		a;

	a = 0;
	while (str[a] != 0)
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	main(void)
{
	char	*str;
	char	*to_find;

	str = malloc(sizeof(char) * 10);
	to_find = malloc(sizeof(char) * 5);
	ft_strlcpy(str, "aaadcabcd", 10);
	ft_strlcpy(to_find, "abcd", 5);
	ft_putstr(ft_strnstr(str, to_find, 9));
}*/
