
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;
	char c;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{	
			c = av[1][i];
			if (c >= 'a' && c <= 'm')
				ft_putchar(c + 13);
			else if (c >= 'A' && c <= 'M')
				ft_putchar(c + 13);
			else if (c >= 'n' && c <= 'z')
				ft_putchar(c - 13);
			else if (c >= 'N' && c <= 'Z')
				ft_putchar(c - 13);
			else
				ft_putchar(c);
			i++;
		}
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}