/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < nb && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*int main()
{
    char str1[50] = "Tanjiro ";
    char str2[] = "Nezuko";
    unsigned int n = 3;

    ft_strncat(str1, str2, n);

    printf("%s\n", str1);
    return 0;
}*/
