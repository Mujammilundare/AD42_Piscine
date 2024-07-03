/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:51:02 by mundare           #+#    #+#             */
/*   Updated: 2024/02/22 15:04:33 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_diff_min_max(int min, int max)
{
	return (max - min);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*return_arr;
	int	diff;

	if (min >= max)
	{
		return_arr = NULL;
		return (0);
	}
	diff = ft_diff_min_max(min, max);
	return_arr = (int *) malloc(sizeof(int) * diff);
	if (!(return_arr))
		return (-1);
	i = 0;
	while (min < max)
	{
		return_arr[i] = min;
		min++;
		i++;
	}
	*range = return_arr;
	return (i);
}
// int main(void)
// {
// 	int	*output;
// 	int	i = 0;
// 	printf("Range: %d ",ft_ultimate_range(&output, 5, 10));
// 	while(i < (10 - 5))
// 	{
// 		printf("\n%d ", output[i]);
// 		i++;
// 	}
// }
