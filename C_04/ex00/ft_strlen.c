/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:22:51 by mundare           #+#    #+#             */
/*   Updated: 2024/02/14 18:30:50 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
// int main(void)
// {
//     char str[] = "helloworld";
//     printf("\n%d",ft_strlen(str));
//     printf("\n%lu",strlen(str));
//     return (0);
// }
