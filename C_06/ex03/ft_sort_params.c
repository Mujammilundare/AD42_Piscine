/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:54:03 by mundare           #+#    #+#             */
/*   Updated: 2024/02/17 17:25:01 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		ind;
	int		compare_str;
	char	*to_swap;

	ind = 1;
	while ((argc - 1) > ind)
	{
		compare_str = ft_strcmp(argv[ind], argv[ind + 1]);
		if (compare_str > 0)
		{
			to_swap = argv[ind];
			argv[ind] = argv[ind + 1];
			argv[ind + 1] = to_swap;
			ind = 1;
		}
		else
			ind++;
	}
	ft_print_params(argc, argv);
	return (0);
}
