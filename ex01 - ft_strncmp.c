#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] > s2[a])
		{
			return (1);
		}
		else if (s1[a] < s2[a])
		{
			return (-1);
		}
		a++;
	}
	return (0);
}
/*int main() {
    char str1[] = "quesito";
    char str2[] = "quesadilla";
    unsigned int n = 6;
    int result;

    result = ft_strncmp(str1, str2, n);

    if (result == 0) {
        printf("\0%d", n);
    } else if (result < 0) {
        printf("<0\n%d", n);
    } else {
        printf(">0\n%d", n);
    }
    return 0;
}*/
