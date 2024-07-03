
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

long	abs_val(long n)
{
	long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

char *ft_itoa(int n)
{
	unsigned int	nbr;
	int		sign;
	int		len;
	char		*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = nbr_len(n);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	nbr = abs_val(n);
	while (len--)
	{
		*(str + len) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}

int main(void)
{
	printf("%s", ft_itoa(-111));
	return (0);
}