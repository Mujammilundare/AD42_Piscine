/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:53:38 by mundare           #+#    #+#             */
/*   Updated: 2024/02/18 19:08:31 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int solved_output[4][4];

void ft_fill_up_value(int row, int col, int value)
{
    solved_output[row][col] = value; 
}

void ft_fill_left_right(int row)
{
    int i;
    int j;
    
    i = 0;
    j = 1;
    while (i < 4)
    {
        solved_output[row][i] = j;
        i++;
        j++;
    }
}

void ft_fill_right_left(int row)
{
    int i;
    int j;
    
    i = 3;
    j = 1;
    while (i >= 0)
    {
        solved_output[row][i] = j;
        i--;
        j++;
    }
}

void ft_fill_top_down(int col)
{
    int i;
    int j;
    
    i = 0;
    j = 1;
    while (i < 4)
    {
        solved_output[i][col] = j;
        i++;
        j++;
    }
}

void ft_fill_down_top(int col)
{
    int i;
    int j;
    
    i = 3;
    j = 1;
    while (i >= 0)
    {
        solved_output[i][col] = j;
        i--;
        j++;
    }
}