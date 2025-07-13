char *ft_strcat(char *dest, char *src)
{
	char *result;

	result = dest;
	while(*dest)
		dest++;
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return result;
}
