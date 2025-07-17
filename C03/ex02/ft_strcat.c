char	*ft_strcat(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (result);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[20] = "Hola ";
	char str2[20] = "Hola ";

	printf("original: %s\n", strcat(str1, "Mundo!"));
	printf("mio: %s\n", ft_strcat(str2, "Mundo!"));
}*/
