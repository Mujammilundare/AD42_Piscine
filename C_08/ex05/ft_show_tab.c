/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:42:04 by mundare           #+#    #+#             */
/*   Updated: 2024/02/21 13:15:00 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
//struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnewline(void)
{
	write(1, "\n", 1);
}

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_putnum(char num)
{
	char	c;

	c = num % 10 + '0';
	if (num / 10 > 0)
		ft_putnum(num / 10);
	write(1, &c, 1);
	return (0);
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putchar(par[i].str);
		ft_putnewline();
		ft_putnum(par[i].size);
		ft_putnewline();
		ft_putchar(par[i].copy);
		ft_putnewline();
		i++;
	}
}
// int main(int argc, char **argv)
// {
//     if (argc <= 1)
//         return (1);
//     t_stock_str *result_set = ft_strs_to_tab(argc, &argv[1]);
//     if (!result_set)
//         return (1);
//     ft_show_tab(result_set);
// }
