
#include <unistd.h>

void ft_putchar(char c[])
{
	int i = 0;
	while(c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

void ft_putnbr(int nb)
{
	int mod;
	int div;
	if (nb < 10)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
	else
	{
		div = nb / 10 + '0';
		mod = nb % 10 + '0';
		write(1, &div, 1);
		write(1, &mod, 1);
	}
}

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			ft_putchar("fizzbuzz");
		else if (i % 3 == 0)
			ft_putchar("fizz");
		else if (i % 5 == 0)
			ft_putchar("buzz");
		else
			ft_putnbr(i);
		write(1, " ", 1);
		i++;
	}
	return (0);
}