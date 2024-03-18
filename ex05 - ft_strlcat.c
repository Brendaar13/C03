#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	b;
	unsigned int	c;
	unsigned int	deslen;
	unsigned int	solen;

	b = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	deslen = c;
	solen = ft_strlen(src);
	if (size == 0 || size <= deslen)
		return (solen + size);
	while (src[b] != '\0' && b < size - deslen - 1)
	{
		dest[c] = src [b];
		c++;
		b++;
	}
	dest[c] = '\0';
	return (deslen + b);
}
/*int	main()
{
	char src[] = "nuggets";
	char dest[] = "papitas";
	printf("%d \n", ft_strlcat(dest, src, 16));
	printf("%s \n", dest);
}*/
