int	ft_atoi(char *str)
{
	int	neg;
	int	result;

	neg = 1;
	result = 0;
	while ((*str > 8 && *str < 14) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			neg = -neg;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	return (result * neg);
}

/*#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i;

	i = atoi("  \r \n \f \v \t    +2147483647Hola! que tal?1234");
	printf("OG : %d\n", i);
	i = ft_atoi("  \r \n \f \v \t    +2147483647Hola! que tal?1234");
	printf("MIO: %d\n", i);
}*/
