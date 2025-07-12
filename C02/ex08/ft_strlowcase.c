char *ft_strlowcase(char *str)
{
	char *inicio;

	inicio = str;
	while(*str)
	{
		if(*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return inicio;
}
