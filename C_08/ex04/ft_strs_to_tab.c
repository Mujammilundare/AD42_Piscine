/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:59:25 by mundare           #+#    #+#             */
/*   Updated: 2024/02/21 19:44:06 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!(dest))
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(stock))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strcpy(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}
// int main(int argc, char **argv)
// {
// 	int i;
//     if (argc <= 1)
//         return (1);
// 	t_stock_str *result_set = ft_strs_to_tab(argc - 1, &argv[1]);
//     if (!result_set)
//         return (1);
// 	i = 0;
//     while ((argc - 1) > i)
//     {
//         printf("String: %s\n", result_set[i].str);
//         printf("Size: %d\n", result_set[i].size);
//         printf("Copy: %s\n\n", result_set[i].copy);
// 		i++;
//     }
//  	i = 0;
//     while ((argc - 1) > i)
//     {
// 		free(result_set[i].copy);
// 		i++;
//     }
//     free(result_set);
//     return (0);
// }