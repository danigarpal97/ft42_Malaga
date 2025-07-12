char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *puntero;
	
	puntero = dest;
	while(n-- && *src)
	{
		*dest++ = *src++;
	}
	while(n--)
        {
                *dest++= '\0';
        }
	return puntero;
}
