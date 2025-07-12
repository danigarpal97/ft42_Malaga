char *ft_strcpy(char *dest, char *src)
{
	char *puntero;

	puntero = dest;
	while(*src)
	{
		*dest++= *src++;
	}
	*dest = '\0';
	return puntero;
}
