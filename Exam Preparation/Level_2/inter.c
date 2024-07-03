/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:35:41 by mundare           #+#    #+#             */
/*   Updated: 2024/02/27 18:05:13 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_inter(char *s1, char *s2)
{
	int i;
	int ascii[127];
	
	i = 0;
	while (i < 127)
	{
		ascii[i] = 0;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ascii[(int) s2[i]] = 1;
		i++;
	}
	i = 0;
	while (s1[i])
	{
		if(ascii[(int) s1[i]] == 1)
		{
			write(1, &s1[i] , 1);
			ascii[(int) s1[i]] = 2;
		}
		i++;
	}

}
int main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}