#include <unistd.h>

int	ft_invalid_base(char *base)
{
	int	basel;
	int	i;
	int	j;

	i = 0;
	basel = 0;
	while (base[basel])
	{
		if (base[basel] == '+' || base[basel] == '-')
			return (1);
		basel++;
	}
	if (basel < 2)
		return (1);
	while (i < basel - 1)
	{
		j = i + 1;
		while (j < basel)
			if (base[i] == base[j++])
				return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	long	n;
	char	c;

	l = 0;
	n = nbr;
	while (base[l])
		l++;
	if (ft_invalid_base(base) == 1)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= l)
	{
		ft_putnbr_base(n / l, base);
	}
	c = base[n % l];
	write(1, &c, 1);
}

/*int	main(void)
{
	int	a;

	a = 63;
	ft_putnbr_base(a, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(a, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(a, "01234567");
	write(1, "\n", 1);
	ft_putnbr_base(a, "01");
	write(1, "\n", 1);
}*/
