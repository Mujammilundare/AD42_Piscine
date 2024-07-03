
#include <stdio.h>

void ft_pgcd(int a, int b)
{
	int ans = 0;
	int i = 1;
	while (i < a && i < b)
	{
		if(a % i == 0 && b % i == 0)
			ans = i;
		i++;
	}

	printf("%d",ans);
}

int main(void)
{
	int a = 14;
	int b = 77;
	ft_pgcd(a,b);
	return(0);
}