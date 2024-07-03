/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:35:36 by mundare           #+#    #+#             */
/*   Updated: 2024/02/09 17:41:58 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		a_size;
	int		swap;

	i = 0;
	a_size = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[a_size];
		tab[a_size] = swap;
		i++;
		a_size--;
	}
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", tab[i]);
	}
	
}

int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5,6};
	int size = 7;

	ft_rev_int_tab(tab, size);
	return (0);
}