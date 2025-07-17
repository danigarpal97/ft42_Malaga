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

/*#include <stdio.h>
int	main(void)
{
	printf("2: %d\n", ft_is_prime(2));
	printf("3: %d\n", ft_is_prime(3));
	printf("5: %d\n", ft_is_prime(5));
	printf("9: %d\n", ft_is_prime(9));
	printf("17: %d\n", ft_is_prime(17));
	printf("0: %d\n", ft_is_prime(0));
	printf("-32: %d\n", ft_is_prime(-32));
	printf("198: %d\n", ft_is_prime(198));
	printf("199: %d\n", ft_is_prime(199));
	printf("487: %d\n", ft_is_prime(487));
	printf("497: %d\n", ft_is_prime(497));
}*/
