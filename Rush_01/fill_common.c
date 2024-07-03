/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_common.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:11:59 by mundare           #+#    #+#             */
/*   Updated: 2024/02/18 20:40:52 by mundare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int col1up;
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
int solved_output[4][4];
void ft_fill_up_value(int row, int col, int value);
void ft_fill_left_right(int row);
void ft_fill_right_left(int row);
void ft_fill_top_down(int col);
void ft_fill_down_top(int col);

void fill_common_area1()
{
    if (row1left == 1)
        ft_fill_up_value(0, 0, 4);
    if (row2left == 1)
        ft_fill_up_value(1, 0, 4);
    if (row2left == 1)
        ft_fill_up_value(2, 0, 4);
    if (row3left == 1)
        ft_fill_up_value(3, 0, 4);
    if (row1left == 4)
        ft_fill_left_right(0);
    if (row2left == 4)
        ft_fill_left_right(1);
    if (row3left == 4)
        ft_fill_left_right(2);
    if (row4left == 4)
        ft_fill_left_right(3);
}

void fill_common_area2()
{
    if (row1right == 1)
        ft_fill_up_value(0, 3, 4);
    if (row2right == 1)
        ft_fill_up_value(1, 3, 4);
    if (row2right == 1)
        ft_fill_up_value(2, 3, 4);
    if (row3right == 1)
        ft_fill_up_value(3, 3, 4);
    if (row1right == 4)
        ft_fill_right_left(0);
    if (row2right == 4)
        ft_fill_right_left(1);
    if (row3right == 4)
        ft_fill_right_left(2);
    if (row4right == 4)
        ft_fill_right_left(3);
}

void fill_common_area3()
{
    if (col1up == 1)
        ft_fill_up_value(0, 0, 4);
    if (col2up == 1)
        ft_fill_up_value(0, 1, 4);
    if (col3up == 1)
        ft_fill_up_value(0, 2, 4);
    if (col4up == 1)
        ft_fill_up_value(0, 3, 4);
    if (col1up == 4)
        ft_fill_top_down(0);
    if (col2up == 4)
        ft_fill_top_down(1);
    if (col3up == 4)
        ft_fill_top_down(2);
    if (col4up == 4)
        ft_fill_top_down(3);
}

void fill_common_area4()
{
    if (col1down == 1)
        ft_fill_up_value(3, 0, 4);
    if (col2down == 1)
        ft_fill_up_value(3, 1, 4);
    if (col3down == 1)
        ft_fill_up_value(3, 2, 4);
    if (col4down == 1)
        ft_fill_up_value(3, 3, 4);
    if (col1down == 4)
        ft_fill_down_top(0);
    if (col2down == 4)
        ft_fill_down_top(1);
    if (col3down == 4)
        ft_fill_down_top(2);
    if (col4down == 4)
        ft_fill_down_top(3);
}