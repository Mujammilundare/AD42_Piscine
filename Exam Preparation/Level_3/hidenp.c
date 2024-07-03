/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:12:17 by mundare           #+#    #+#             */
/*   Updated: 2024/02/22 18:28:56 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **argv)
{
	int i = 0;
	int j = 0;
	
	char str1[] = "fgex.;";
	char str2[] = "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6";

	// if (ac == 3)
	// {
		while (str1[i] && str2[j])
		{
			if (str1[i] == str2[j])
				i++;
			j++;
		}
		if (str1[i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	//}
	write(1, "\n", 1);
}