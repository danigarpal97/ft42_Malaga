int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 1)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb--;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(12));
}*/
