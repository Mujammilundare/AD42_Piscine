
#include <unistd.h>

int main(int ac, char **av)
{	
	int i = 0;
	char c;
	char s;
	char r;
	if (ac == 4)
	{
		while (av[1][i] != '\0')
		{	
			c = av[1][i];
			s = av[2][0];
			r = av[3][0];
			
			if(c == s)
				c = r;
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}