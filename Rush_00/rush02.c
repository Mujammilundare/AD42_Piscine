/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:12:11 by mundare           #+#    #+#             */
/*   Updated: 2024/02/11 15:28:34 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (j == 0 || i == 0 || j == (y - 1) || i == (x - 1))
			{
				if ((j == 0 && i == 0) || j == (y - 1) && i == 0)
					ft_putchar('A');
				else if ((i == x - 1 && j == 0) || i == (x - 1) && j == (y - 1))
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
