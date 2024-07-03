/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:38:37 by mundare           #+#    #+#             */
/*   Updated: 2024/02/18 17:46:41 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnewline()
{
	write(1, "\n", 1);
}

void	ft_putint(int nb)
{
    char c = nb + '0';
	write(1, &c, 1);
}

void	ft_putspace()
{
	write(1, " ", 1);
}

void ft_print_msg(char str[])
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    ft_putnewline();
}