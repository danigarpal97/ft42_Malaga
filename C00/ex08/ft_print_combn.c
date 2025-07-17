#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(int *digits, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(digits[i] + '0');
		i++;
	}
	if (digits[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_generate(int *digits, int pos, int n)
{
	int	start;
	int	i;

	start = 0;
	if (pos > 0)
		start = digits[pos - 1] + 1;
	i = start;
	while (i <= 9)
	{
		digits[pos] = i;
		if (pos == n - 1)
			ft_print_digits(digits, n);
		else
			ft_generate(digits, pos + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[9];

	if (n > 0 && n < 10)
		ft_generate(digits, 0, n);
}

/*int	main(void)
{
	ft_print_combn(4);
	return (0);
}*/
