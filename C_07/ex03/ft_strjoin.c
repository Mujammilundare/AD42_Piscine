/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:06:17 by mundare           #+#    #+#             */
/*   Updated: 2024/02/27 15:27:18 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (sep[k] != '\0' && size > 1)
	{
		dest[i] = sep[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*return_str;
	int		i;

	return_str = malloc(sizeof(strs));
	prinf("%d",return_str);
	if (size <= 0)
		return (return_str);
	i = 0;
	while (size > 0)
	{
		ft_strcat(return_str, strs[i], sep, size);
		size--;
		i++;
	}
	return (return_str);
}
int main(void)
{
    char *strs[4] = {"1","22","333","4444"};
    char sep[] = ",";
    printf("%s", ft_strjoin(4, strs, sep));
    return (0);
}
