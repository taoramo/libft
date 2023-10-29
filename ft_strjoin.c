#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	if (s1[0] == 0 && s2[0] == 0)
	{
		str[0] = 0;
		return (str);
	}
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	if (s2[0] != 0)
		ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}
