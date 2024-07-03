
#include <stdio.h>

void prime(int number)
{
	int i = 2;
	while (number >= i)
	{
		if (number % i == 0)
		{
			printf("%d", i);
			if (number == i)
				break ;
			printf("*");
			number = number / i;
			i = 1;
		}
		i++;
	}
}

int main(void)
{
	prime(804577);
	return (0);
}