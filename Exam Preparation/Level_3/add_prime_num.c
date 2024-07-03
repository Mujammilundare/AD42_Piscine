/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:32:07 by mundare           #+#    #+#             */
/*   Updated: 2024/02/22 14:01:02 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void ft_error()
{
	write(1, "0\n", 2);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_convert_to_num(char *str)
{
	int i;
	int num;

	i = 0;
	while (str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

void ft_putnum(int nb)
{
	char c;
	
	c = nb % 10 + '0';
	if(nb / 10 > 0)
		ft_putnum(nb / 10);
	write(1, &c, 1);
}

int	ft_prime_num(int nb)
{
	int	i;

	i = 2;
	if (nb > 1)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

int add_prime_sum(int num)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i <= num)
	{	
		if (ft_prime_num(i) == 1)
		{	
			sum = sum + i;
		}
		i++;
	}
	return (sum);
}

int main(int argc, char **argv)
{
	int sum;

	sum = 0;
	
	if(argc <= 1)
	{
		ft_error();
		exit(1);
	}
	else
		sum = add_prime_sum(ft_convert_to_num(argv[1]));
	
	ft_putnum(sum);
	ft_putchar('\n');
	return (0);
}