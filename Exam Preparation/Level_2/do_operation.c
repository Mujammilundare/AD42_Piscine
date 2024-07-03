
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{	
	int num1;
	int num2;
	int ans;
	char opr;
	if (ac == 4)
	{
		num1 = atoi(av[1]);
		opr = av[2][0];
		num2 = atoi(av[3]);
		if (opr == '*')
			ans = num1 * num2;
		else if (opr == '-')
			ans = num1 - num2;
		else if (opr == '+')
			ans = num1 + num2;
		else if (opr == '/')
			ans = num1 / num2;
		printf("%d\n",ans);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}