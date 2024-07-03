/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:28:03 by mundare           #+#    #+#             */
/*   Updated: 2024/02/21 15:08:45 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_diff_min_max(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*return_arr;
	int	diff;

	if (min >= max)
		return (NULL);
	diff = ft_diff_min_max(min, max);
	return_arr = (int *) malloc (sizeof(int) * diff);
	i = 0;
	while (min < max)
	{
		return_arr[i] = min;
		min++;
		i++;
	}
	return (return_arr);
}

int main(void)
{
	int	*output;
	int	i = 0;
	output = ft_range(-5, 5);
	while(i < (10))
	{
		printf("%d ", output[i++]);
	}
}
