/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:03:18 by mundare           #+#    #+#             */
/*   Updated: 2024/02/14 14:01:33 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa_value(char c)
{
	char	*hexabase;

	hexabase = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hexabase[c / 16]);
		ft_putchar(hexabase[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexabase[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_hexa_value(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
// int main(void)
// {
//     char str[] = "Coucou\ntu vas bien ?";
//     ft_putstr_non_printable(str);
//     return (0);
// }
