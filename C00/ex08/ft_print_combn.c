#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *number, int n, int last)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(number[i] + '0');
		i++;
	}
	if (number[0] != last)
		write(1, ", ", 2);
}

void	ft_recursive(int *number, int n, int index)
{
	int	start;

	start = 0;
	if (index > 0)
		start = number[index - 1] + 1;
	while (start <= 9)
	{
		number[index] = start;
		if (index == n - 1)
			ft_print_number(number, n, 10 - n);
		else
			ft_recursive(number, n, index + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	number[9];

	ft_recursive(number, n, 0);
}

int	main(void)
{
	ft_print_combn(9);
	return (0);
}
