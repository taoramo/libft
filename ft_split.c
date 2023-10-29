#include "libft.h"
/*
int	ft_is_member_sep(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
*/
int	count_words(const char *str, char sep)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i] != 0)
	{
		while (str[i] == sep)
		{
			i++;
		}
		if (str[i] != 0)
			c++;
		while ((str[i] != sep) && str[i] != 0)
		{
			i++;
		}
	}
	return (c);
}

int	ft_strlen_member(const char *str, char sep)
{
	int	n;

	n = 0;
	if (str[0] != 0)
	{
		while (str[n] != 0 && str[n] != sep)
		{
			n++;
		}
	}
	return (n);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**strs;

	j = 0;
	i = 0;
	strs = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (strs == 0)
		return (0);
	while (i < count_words(s, c))
	{
		if (s[j] == c)
			j++;
		else
		{
			strs[i] = malloc(sizeof(char) * (ft_strlen_member(&s[j], c) + 1));
			if (strs[i] == 0)
				return (0);
			ft_strlcpy(strs[i], &s[j], (ft_strlen_member(&s[j], c) + 1));
			j = j + ft_strlen_member(&s[j], c);
			i++;
		}
	}
	strs[i] = 0;
	return (strs);
}
/*
int main(int argc, char **argv)
{
	int i;
	char **strs;

	i = 0;
	strs = ft_split(argv[1], argv[2]);
	if (argc == 3)
	{
		while (i < count_words(argv[1], argv[2]))
		{
			printf("%s %i\n", strs[i], i);
			i++;
		}
		return (0);
	}
	else
	return (0);
}*/	
