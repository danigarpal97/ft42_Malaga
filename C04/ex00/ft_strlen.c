int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

/*#include <stdio.h>
int	main(void)
{
	int a;

	a = ft_strlen("Hola mundo!");
	printf("%d", a);
	return (0);
}*/
