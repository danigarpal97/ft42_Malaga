char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[10] = "Hola";
	char str2[10] = "Hola";
	char str3[10] = "Mundo!";

	strncpy(str1, str3, 5);
	ft_strncpy(str2, str3, 5);
	printf("og:\t%s\n", str1);
	printf("mio:\t%s\n", str2);
}*/
