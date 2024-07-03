/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:53:01 by mundare           #+#    #+#             */
/*   Updated: 2024/02/09 17:43:14 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int		swap;
	int		count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}

	for (int i = 0; i < 7; i++)
	{
		printf("%d ", tab[i]);
	}
}

int	main(void)
{
	int tab[] = {10 , 11, 21, 13, 54, 95,6};
	int size = 7;

	ft_sort_int_tab(tab, size);
	return (0);
}