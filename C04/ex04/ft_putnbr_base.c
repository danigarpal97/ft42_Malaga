#include <unistd.h>

int	ft_invalid_base(char *base)
{
	char	*b;

	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (1);
		b = base + 1;
		while (*b)
		{
			if (*base == *b)
				return (1);
			b++;
		}
		base++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	int		wrong;
	char	*b;

	l = 0;
	b = base;
	while (*b++)
		l++;
	wrong = ft_invalid_base(base);
	if (l < 2 || wrong == 1)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	if (nbr >= l)
	{
		ft_putnbr_base(nbr / l, base);
	}
	write(1, &base[nbr % l], 1);
}

/*int	main(void)
{
	int	a;

	a = 256;
	ft_putnbr_base(a, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(a, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(a, "01234567");
	write(1, "\n", 1);
	ft_putnbr_base(a, "01");
	write(1, "\n", 1);
}*/
