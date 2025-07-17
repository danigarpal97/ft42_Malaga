#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_sort_array(int size, char **str)
{
	char	*swap;
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i + 1 < size)
	{
		j = i + 1;
		k = i;
		while (j < size)
			if (ft_strcmp(str[k], str[j++]) > 0)
				k = j - 1;
		swap = str[i];
		str[i] = str[k];
		str[k] = swap;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_array(argc, argv);
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
