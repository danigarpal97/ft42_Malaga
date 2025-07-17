int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 - (unsigned char)*s2 < 0)
		return (-1);
	if ((unsigned char)*s1 - (unsigned char)*s2 == 0)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("estándar:\n%d\n", strcmp("Hola", "Hola"));
	printf("%d\n", strcmp("ABC", "AB"));
	printf("%d\n", strcmp("AB", "ABC"));
	printf("mia:\n%d\n", ft_strcmp("Hola", "Hola"));
	printf("%d\n", ft_strcmp("ABC", "AB"));
	printf("%d\n", ft_strcmp("AB", "ABC"));
}*/
