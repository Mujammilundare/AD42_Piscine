/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:49:25 by mundare           #+#    #+#             */
/*   Updated: 2024/02/08 14:06:39 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			num[2] = '0';
			while (num[2] <= '9')
			{
				if (num[0] < num[1] && num[1] < num[2])
				{
					ft_putchar(num[0]);
					ft_putchar(num[1]);
					ft_putchar(num[2]);
					if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
						ft_commas();
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
