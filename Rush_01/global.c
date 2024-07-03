/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:42:43 by mundare           #+#    #+#             */
/*   Updated: 2024/02/18 20:15:48 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int user_input[4][4];
int solved_output[4][4];
void	ft_putint(int nb);
void	ft_putnewline();
void	ft_putspace();
int col1up;; 
int col2up; 
int col3up; 
int col4up; 
int col1down; 
int col2down; 
int col3down; 
int col4down; 
int row1left; 
int row2left; 
int row3left;
int row4left;
int row1right;
int row2right;
int row3right;
int row4right;

void ft_assign_values()
{
    col1up    =  user_input[0][0];
    col2up    =  user_input[0][1];
    col3up    =  user_input[0][2];
    col4up    =  user_input[0][3];
    col1down  =  user_input[1][0];
    col2down  =  user_input[1][1];
    col3down  =  user_input[1][2];
    col4down  =  user_input[1][3];
    row1left  =  user_input[2][0];
    row2left  =  user_input[2][1];
    row3left  =  user_input[2][2];
    row4left  =  user_input[2][3];
    row1right =  user_input[3][0];
    row2right =  user_input[3][1];
    row3right =  user_input[3][2];
    row4right =  user_input[3][3];
}

int validate()
{
    if (col1up == 4 && col1down != 1)
        return (0);
    if (col2up == 4 && col2down != 1)
        return (0);
    if (col3up == 4 && col3down != 1)
        return (0);
    if (col4up == 4 && col4down != 1)
        return (0);
    if (col1down == 4 && col1up != 1)
        return (0);
    if (col2down == 4 && col2up != 1)
        return (0);
    if (col3down == 4 && col3up != 1)
        return (0);
    if (col4down == 4 && col4up != 1)
        return (0);
    if (row1left == 4 && row1right != 1)
        return (0);
    if (row2left == 4 && row2right != 1)
        return (0);
    if (row3left == 4 && row3right != 1)
        return (0);
    if (row4left == 4 && row4right != 1)
        return (0);
    if (row1right == 4 && row1left != 1)
        return (0);
    if (row2right == 4 && row2left != 1)
        return (0);
    if (row3right == 4 && row3left != 1)
        return (0);
    if (row4right == 4 && row4left != 1)
        return (0);
    
    return (1);
}

void ft_print_solution()
{
    int i;
    int j;
    i = 0;
    while (i < 4)
    {   
        j = 0;
        while (j < 4)
        {
            ft_putint(solved_output[i][j]);
            if(j < 3)
                ft_putspace();
            j++;
        }
        ft_putnewline();
        i++;
    }
}

void ft_fillup()
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            solved_output[i][j] = 0;
            j++;
        }
        i++;
    }
}