int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("49: %d\n", ft_sqrt(49));
	printf("25: %d\n", ft_sqrt(25));
	printf("26: %d\n", ft_sqrt(26));
}*/
