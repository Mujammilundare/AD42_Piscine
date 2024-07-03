
#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int bit[10];
	int i = 0;
	char c;
	while (i < 8)
	{
		bit[i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	// printing in rev
	i = 0;
	while (i < 8)
	{
		c = bit[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	// printing in asc
	i = 7;
	while (i >= 0)
	{
		c = bit[i] + '0';
		write(1, &c, 1);
		i--;
	}
	write(1, "\n", 1);
}

int main(void)
{
	char c = 2;
	print_bits(c);
	// write(1, "\n", 1);
	// c = 2;
	// reverse_bits(c);
	// c = 2;
	// swap_bits(c);
	return (0);
}