/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 02:31:25 by abbanabi          #+#    #+#             */
/*   Updated: 2024/02/15 19:18:29 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	base_len(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (base && base[i])
	{
		j = i + 1;
		if (ft_isspace(base[i]))
			return (0);
		while (base[j])
		{
			if (base[j] == base[i] || base[i] == '-' || base[i] == '+')
				return (0);
			j++;
		}
		i++;
		len++;
	}
	if (len <= 1)
		return (0);
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	char	c;
	int		len;

	nb = nbr;
	len = base_len(base);
	if (!len)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	c = base[nb % len];
	if (nb / len > 0)
		ft_putnbr_base(nb / len, base);
	write(1, &c, 1);
}
