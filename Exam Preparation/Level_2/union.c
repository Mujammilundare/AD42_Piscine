/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:59:54 by mundare           #+#    #+#             */
/*   Updated: 2024/02/22 16:31:01 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_union(char *s1, char *s2)
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
	while (*s1 && s1[i])
	{
		if(ascii[(int)s1[i]] == 0)
		{
			write(1, &s1[i], 1);
			ascii[(int) s1[i]] = 1;	
		}
		i++;
	}
	i = 0;
	while (*s2 && s2[i])
	{
		if(ascii[(int) s2[i]] == 0)
		{
			write(1, &s2[i], 1);
			ascii[(int) s2[i]] = 1;	
		}
		i++;
	}
} 

int main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}