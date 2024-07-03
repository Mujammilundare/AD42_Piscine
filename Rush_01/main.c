/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:12:44 by mundare           #+#    #+#             */
/*   Updated: 2024/02/22 12:02:30 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int user_input[4][4];
void ft_assign_values();
void ft_print_solution();
void ft_solve();
void ft_fillup();
void ft_print_msg();
int validate();

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int x;
	int y;
	int counter;
	int is_valid;

	i = 1;
	j = 0;
	x = 0;
	y = 0;
	counter = 0;
	is_valid = 1;
	if (argc != 17)
	{
		 ft_print_msg("Error");
		 return (0);
	}
	
	while (argc > i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			user_input[x][y] = argv[i][j] - '0';
			if ((argv[i][j] < '1' || argv[i][j] > '4') || j > 0)
				is_valid = 0;
			j++;
		}
		counter++;
		i++;
		y++;
		if(counter == 4)
		{
			x++;
			y = 0;
			counter = 0;
		}
	}
	ft_assign_values();    
	if(is_valid && validate())
		ft_solve();
	else    
		ft_print_msg("Error");
	return (0);
}