
#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c) 
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;
	int count;
	char c;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{	
			c = av[1][i];
			count = 1;
			
			if (c >= 'a' && c <= 'z')
				count = c - 96;
			if (c >= 'A' && c <= 'Z')
				count = c - 64;
			while (count > 0)
			{
				ft_putchar(c);
				count--;
			}
			i++;
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}