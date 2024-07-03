
#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

void reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
		write(1, &res, 1);
	}
}

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main(void)
{
	char c = 2;
	print_bits(c);
	write(1, "\n", 1);
	c = 2;
	reverse_bits(c);
	c = 2;
	swap_bits(c);
	return (0);
}