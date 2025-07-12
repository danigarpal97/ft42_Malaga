#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
	char *hexa_src;
	char hexa[3];
	unsigned char c;

	hexa_src = "0123456789abcdef";	
	hexa[0] = '\\';
	while(*str)
	{
		c = (unsigned char)*str;
		if(c < 32 || c == 127)
		{
			hexa[1] = hexa_src[c / 16];
        		hexa[2] = hexa_src[c % 16];
			write(1, hexa, 3);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
