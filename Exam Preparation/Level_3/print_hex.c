
#include <unistd.h>

int print_hex(int nb)
{
	char hexa[] = "0123456789abcdefg";
	if(nb >= 16)
		print_hex(nb / 16);
	write(1, &hexa[nb % 16], 1);
	return (nb);
}

int main(void)
{
	int nb = 5156454;
	print_hex(nb);
	
	return (0);
}