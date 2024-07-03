/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:37:37 by mundare           #+#    #+#             */
/*   Updated: 2024/02/22 14:41:30 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_epur_str(char *str)
{
	int i;
	int is_first;
	
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
			i += 1;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
				is_first = 1;
			if (!(str[i] == ' ' || str[i] == '\t'))
			{
				if (is_first)
					write(1, "\t", 1);
				is_first = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
}

int main(int ac, char **av)
{
	int i;
	
	i = 0;
	if(ac < 2 || ac > 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{	
		ft_epur_str(av[1]);
	}
	ft_putchar('\n');
	return (0);
}