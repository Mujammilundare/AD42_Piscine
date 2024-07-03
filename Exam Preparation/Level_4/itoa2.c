
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char itoa(int nb)
{
	
	int len = 0;
	int i = 0;
	int nbr = nb;
	if(nb < 0)
		len++;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	char *ret = (char *) malloc (sizeof(char) * (len + 1));
	if(!ret)
		return (-1);
	ret[len] = '\0';

	if(nbr < 0)
	{
		ret[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		ret[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (ret);
}

int main(void)
{
	itoa(-1234);
	return (0);
}