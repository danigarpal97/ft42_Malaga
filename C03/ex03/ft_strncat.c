char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *result;

	result = dest;
	while(*dest)
	{
		dest++;
	}
	while(nb > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return result;
}
