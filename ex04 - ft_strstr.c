/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int		a;
	char	*temp;

	temp = str;
	if (*to_find == '\0')
		return (str);
	while (*temp)
	{
		a = 0;
		if (*temp == to_find[0])
		{
			while (temp[a] == to_find[a] && to_find[a])
				a++;
			if (to_find[a] == '\0')
				return (temp);
		}
		temp++;
	}
	return (0);
}
/*int main() {
    char str[] = "Me quiero morir, sos ayuda quiero dormir";
    char to_find[] = "sos ayuda quiero dormir";

    char *result = ft_strstr(str, to_find);

    if (result != '\0') {
        printf("%s\n", result);
    } else {
        printf("\n");
    }
    return 0;
}*/
