char *ft_strstr(char *str, char *to_find)
{
	char *s2;
	char *f2;

	if(!*to_find)
		return str;
	while(*str)
	{
		s2 = str;
		f2 = to_find;
		while(*s2 && *f2 && *s2 == *f2)
		{
			s2++;
			f2++;
		}
		if(!*f2)
			return str;
		str++;
	}
	return 0;
}
