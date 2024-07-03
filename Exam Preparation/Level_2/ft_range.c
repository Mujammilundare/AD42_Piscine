/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:49:21 by mundare           #+#    #+#             */
/*   Updated: 2024/02/22 18:11:25 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int i;
	int *return_arr;
	if(start >= end)
		return (NULL);

	return_arr = (int *) malloc (sizeof(int) * (end - start));

	i = 0;
	while (start <= end)
	{
		return_arr[i] = start;
		start++;
		i++;
	}
	// ft_rrange.c
	// i = 0;
	// while (start <= end)
	// {
	// 	return_arr[i] = end;
	// 	end--;
	// 	i++;
	// }
	return (return_arr);
}

int main(int ac, char **av)
{
	int	*output;
	int	i = 0;
	output = ft_range(1, 3);
	while(i < (3))
	{
		printf("%d ", output[i++]);
	}
}