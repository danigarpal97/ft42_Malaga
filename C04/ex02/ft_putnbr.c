#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	result[10];
	int		l;

	n = nb;
	l = 9;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n > 10)
	{
		result[l] = (n % 10) + '0';
		n /= 10;
		l--;
	}
	result[l] = n + '0';
	while (l < 10)
		write(1, &result[l++], 1);
}

/*int main(void)
{
	ft_putnbr(-21474836481);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	return (0);
}*/
