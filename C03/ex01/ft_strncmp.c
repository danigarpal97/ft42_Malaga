int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("estándar:\n%d\n", strncmp("Hola", "Hola", 4));
	printf("%d\n", strncmp("ABC", "AB", 3));
	printf("%d\n", strncmp("AB", "ABC", 2));
	printf("mia:\n%d\n", ft_strncmp("Hola", "Hola", 4));
	printf("%d\n", ft_strncmp("ABC", "AB", 3));
	printf("%d\n", ft_strncmp("AB", "ABC", 2));
}*/
