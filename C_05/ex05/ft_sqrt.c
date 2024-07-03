/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:51:46 by mundare           #+#    #+#             */
/*   Updated: 2024/02/17 13:39:12 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			if (sqrt > 46340)
				return (0);
			sqrt++;
		}
	}
	return (0);
}
// int main(void)
// {
//     printf("%d",ft_sqrt(144));
//     return (0);   
// }
