char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*result;

	if (nb < 1)
		return (dest);
	result = dest;
	while (*dest)
		dest++;
	while (nb-- > 0 && *src)
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

	printf("original:\t %s\n", strncat(str1, "mundo!", 3));
	printf("mio:\t\t %s\n", ft_strncat(str2, "mundo!", 3));
}*/
