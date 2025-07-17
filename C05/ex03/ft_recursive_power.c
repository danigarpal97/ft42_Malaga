int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	if (power > 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 10));
}*/
