/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:16:41 by mundare           #+#    #+#             */
/*   Updated: 2024/02/17 13:39:02 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb > 1)
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	i = nb;
	while (1)
	{
		is_prime = ft_is_prime(i);
		if (is_prime == 1)
			return (i);
		i++;
	}
	return (i);
}
// int main(void)
// {
//     printf("%d",ft_find_next_prime(64000));
//     return (0);   
// }
