
#include <unistd.h>

void ft_putstr(char str[])
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_strcpy(char src[], char dest[])
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	ft_putstr(dest);
}

int main(int ac, char **av)
{
	char src[] = "test";
	char dest[] = "";
	ft_strcpy(src, dest);
	return (0);
}