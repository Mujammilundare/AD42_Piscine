/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:39:13 by mundare           #+#    #+#             */
/*   Updated: 2024/02/15 13:51:24 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	a;
	int	b;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		a = ft_fibonacci(index - 1);
		b = ft_fibonacci(index - 2);
		return (a + b);
	}
}
// void ft_putchar(char c)
// {
//     write(1, &c, 2);
// }
// int	ft_fibonacci(int index)
// {
//     int a = 0;
//     int b = 1;
//     int sum;
//     if (index < 0)
// 		return (-1);
// 	if (index == 0)
// 		return (0);
//     while (index > 0)
//     {
//         sum = a + b;
//         ft_putchar(sum + '0');
//         a = b;
//         b = sum;
//         index--;
//     }
//     return (1);
// }
// int main(void)
// {
//     ft_fibonacci(10);
//     printf("\na+b :%d %d %d ",a,b, a+b );
//     for (int i = 0; i < 5; i++) {
//       ft_fibonacci(i);
//       printf("\nfib : %d ", ft_fibonacci(i));
//     }
//     return (0);
// }
