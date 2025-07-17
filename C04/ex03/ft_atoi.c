int	ft_collapse_int_array(int *n, int l)
{
	int	result;
	int	mult;
	int	i;

	i = 0;
	mult = 1;
	result = 0;
	while (l <= 9)
	{
		result += n[l++] * mult;
		if (i++ == 0)
			mult = 10;
		else
			mult *= 10;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	number[10];
	int	result;
	int	neg;
	int	l;

	l = 9;
	neg = 1;
	result = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -neg;
		str++;
	}
	while (*str >= '0' && *str <= '9' && l >= 0)
		number[l--] = *str++ - '0';
	result = ft_collapse_int_array(number, ++l);
	if (neg < 0)
		result = -result;
	return (result);
}

/*#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i;
	
	printf("CONTROL: -1023456789Hola! que tal?1234\n");
	i = atoi("  \r \n \f \v \t    +1023456789Hola! que tal?1234");
	printf("ORIGINAL: %d\n", i);
	i = ft_atoi("  \r \n \f \v \t    +10234567890000000Hola! que tal?1234");
        printf("MIO: %d\n", i);
}*/
