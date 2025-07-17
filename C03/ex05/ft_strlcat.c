unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destl;
	unsigned int	srcl;

	i = 0;
	destl = 0;
	srcl = 0;
	while (dest[destl] && destl < size)
		destl++;
	while (src[srcl])
		srcl++;
	if (destl == size)
		return (size + srcl);
	while (src[i] && (destl + i + 1) < size)
	{
		dest[destl + i] = src[i];
		i++;
	}
	dest[destl + i] = '\0';
	return (destl + srcl);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[20] = "Hola ";
	char str2[20] = "Hola ";
	int s1 = 0;
	int s2 = 0;

	s1 = strlcat(str1, "mundo!", 8);
	s2 = ft_strlcat(str2, "mundo!", 8);
	printf("original:\t %s\t->%d\n", str1, s1);
	printf("mio:\t\t %s\t->%d\n", str2, s2);
}*/
