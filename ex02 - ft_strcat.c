/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*int main() {
    char str1[50] = "Me quiero ";
    char str2[] = "mori";

    ft_strcat(str1, str2);

    printf("%s\n", str1);
    return 0;
}*/
