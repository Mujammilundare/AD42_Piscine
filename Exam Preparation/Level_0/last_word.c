
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if ((av[1][i] == 32 || av[1][i] == 9) && av[1][i + 1] != '\0')
				j = i;
			i++;
		}
		while (av[1][j] != '\0')
		{
			if(av[1][j] != 32 && av[1][j] != 9)
				write(1, &av[1][j], 1);
			j++;
		}
		write(1, "\n", 1);	
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}