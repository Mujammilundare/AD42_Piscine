
#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	c = nb % 10 + '0';
	if(nb / 10 > 0)
		ft_putnbr(nb / 10);
	write(1,&c,1);
}

int main(void)
{
	ft_putnbr(-2147483647);
	return (0);
}