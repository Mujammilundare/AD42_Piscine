/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdwatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:29:35 by mundare           #+#    #+#             */
/*   Updated: 2024/02/22 18:34:02 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	int i = 0;
	int j = 0;
	
	char str1[] = "forty two";
	char str2[] = "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuixq";

	// if (ac == 3)
	// {
		while (str1[i] && str2[j])
		{
			if (str1[i] == str2[j])
				i++;
			j++;
		}
		j = 0;
		if (str1[i] == '\0')
		{
			while (str1[j])
			{
				write(1, &str1[j], 1);
				j++;
			}
		}
		else
			write(1, "\n", 1);
	write(1, "\n", 1);
	return (0);
}