char *ft_strcapitalize(char *str)
{
	char *inicio;
	int nuevapalabra;

	nuevapalabra = 1;
	inicio = str;
	while(*str)
	{
		if(nuevapalabra && *str >= 'a' && *str <= 'z')
			*str -= 32;
		if(!nuevapalabra && *str >= 'A' && *str <= 'Z')
                        *str += 32;
		if((*str > 64 && *str < 91) || (*str > 96 && *str < 123) || (*str > 47 && *str < 58))
			nuevapalabra = 0;
		else
			nuevapalabra = 1;
		str++;
	}
	return inicio;
}
