#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s2;
	char	*f2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s2 = str;
		f2 = to_find;
		while (*s2 && *f2 && *s2 == *f2)
		{
			s2++;
			f2++;
		}
		if (!*f2)
			return (str);
		str++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	hay[30] = "Enestebancomehesentado";
	char	needle[10] = "esteban";

	printf("original:\t%s\n", strstr(hay, needle));
	printf("mio:\t\t%s\n", ft_strstr(hay, needle));
}*/
