#include <stdio.h>
#include <stdlib.h>
int   is_space(char c)
{
	if ( c == ' ' || c == '\n' || c =='\t' || c == '\r' || c == '\v'
	|| c == '\f')
		return (1);
	else
		return (0);
}
int        ft_atoi(char *str)
{
	int i;
    int b;
    int rez;

    i = 0;
    b = 1;
    rez = 0;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
    	if (str[i] == '-')
        	b = -1;
    	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
    	rez = rez * 10 + str[i] - 48;
    	i++;
	}
	return (rez * b);
}
int main()
{
	printf("%d", ft_atoi("4234"));
	return(0);
}
