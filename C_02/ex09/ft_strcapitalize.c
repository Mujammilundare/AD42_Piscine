/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:47:12 by mundare           #+#    #+#             */
/*   Updated: 2024/02/13 12:30:08 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		i;
	int		first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (first == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (first == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			first = 1;
		else
			first = 0;
		i++;
	}
	return (str);
}
// int main(void)
// {
//     char src[] = "~salut, comment tu vas ?;
//     ft_strcapitalize(src);
// 	printf("%s",src);
//     return (0);
// }
//
