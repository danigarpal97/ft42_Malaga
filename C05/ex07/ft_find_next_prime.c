int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		if (nb < 2)
			return (2);
		if (nb % 2 == 0)
			nb++;
		else
			nb += 2;
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("-2147483648: %d\n", ft_find_next_prime(-2147483648));
	printf("25: %d\n", ft_find_next_prime(25));
	printf("23: %d\n", ft_find_next_prime(23));
	printf("12: %d\n", ft_find_next_prime(12));
	printf("80: %d\n", ft_find_next_prime(80));
	printf("200: %d\n", ft_find_next_prime(200));
}*/
