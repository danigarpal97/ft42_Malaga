char *ft_strupcase(char *str)
{
	char *inicio;

	inicio = str;
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return inicio;
}
