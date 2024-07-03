/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:37:22 by mundare           #+#    #+#             */
/*   Updated: 2024/02/23 17:14:15 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_putchar(char c)
// {
// 	write(1, &c , 1);
// }
// void ft_putnbr_rev(int nb)
// {
// 	int mod;
// 	while (nb > 0)
// 	{
// 		mod = nb % 10;
// 		ft_putchar(mod + '0');
// 		nb = nb / 10;
// 	}
// }
void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	c = nb % 10 + '0';
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	write(1, &c, 1);
}
int main(void)
{
	ft_putnbr(123);
	return (0);
}