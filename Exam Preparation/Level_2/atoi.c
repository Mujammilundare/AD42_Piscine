
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	while (str[i] == 32 || (str[i] >=9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int main(int ac, char **av)
{
	char str[] = "  +1234ghk123";
	printf("%d\n",atoi(str));
	printf("%d\n",ft_atoi(str));
	return (0);
}