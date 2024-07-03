
#include <unistd.h>
#include <stdio.h>

void ft_capitalizer(char *str)
{
	int i = 0;
	int first = 1;
	char c;
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if(first == 1 && (c >= 'a' && c <= 'z'))
			c = c - 32;
		else if(first ==  0 && (c >= 'A' && c <= 'Z'))
			c = c + 32;
		if (c < '0' || c > 'z' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a'))
			first = 1;
		else
			first = 0;
		i++;
		write(1, &c, 1);
	}
}

void    rstr_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        write(1, &str[i++], 1);
    }
}


int main(void)
{
	char str[] = " tWst   a42 m!E nEoo";
	//ft_capitalizer(" tWst   a42 m!E nEoo");
	rstr_capitalizer(str);
	return (0);
}