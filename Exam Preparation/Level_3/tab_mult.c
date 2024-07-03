
#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int nb)
{
	char c;
	if (nb > 9)
	{
		c = nb % 10 + '0';
		ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

void tab_multi(int nb)
{
	int i = 1;
	while (i < 10)
	{
		ft_putnbr(nb);
		write(1, " x ", 3);
		ft_putnbr(i);
		write(1, " = ", 3);
		ft_putnbr(nb*i);
		write(1, "\n", 1);
		i++;
	}
}

int main(int ac, char **av)
{	
	if(ac == 2)
	{
		tab_multi(atoi(av[1]));
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}