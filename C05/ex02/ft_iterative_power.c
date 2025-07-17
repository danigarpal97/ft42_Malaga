int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(6, 4));
}*/
