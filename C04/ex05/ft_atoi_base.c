int	ft_posof(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_invalid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (i < 2);
}

void	ft_extract_data(char *data, char *str, char *base, int *l)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (*str)
	{
		j = 0;
		found = 0;
		while (base[j])
		{
			if (*str == base[j])
				found = 1;
			j++;
		}
		if (!found)
			break ;
		data[i] = *str;
		i++;
		str++;
	}
	*l = i;
}

int	ft_process_data(char *n, char *base, int *l)
{
	int	result;
	int	i;
	int	len;
	int	p;

	result = 0;
	i = 0;
	len = 0;
	while (base[len])
		len++;
	while (i < *l)
	{
		p = ft_posof(n[i], base);
		result = result * len + p;
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	char	data[32];
	int		l;
	int		neg;
	int		r;

	l = 0;
	neg = 1;
	if (ft_invalid_base(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -neg;
		str++;
	}
	ft_extract_data(data, str, base, &l);
	r = ft_process_data(data, base, &l);
	return (neg * r);
}

/*#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_atoi_base("     --10234X569Hola!", "0123456789");
	printf("DECI: %d\n", i);
	i = ft_atoi_base("  \r \n \f \v \t    -718aba-Hola!", "0123456789abcdef");
	printf("HEXA: %d\n", i);
	i = ft_atoi_base("  \r \n \f \v \t    -----10239436571Hola!", "01234567");
	printf("OCTA: %d\n", i);
	i = ft_atoi_base("  \r \n \f \v \t    -----1000100111001I!", "01");
	printf("BINARY: %d\n", i);
}*/
