/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
/*int main() {
    char str1[] = "quesito";
    char str2[] = "pan";
    int result;

    result = ft_strcmp(str1, str2);
	if (result == 0) {
        printf("0\n");
    } else if (result < 0) {
        printf("<0\n");
    } else {
        printf(">0\n");
    }
    return 0;
}*/
