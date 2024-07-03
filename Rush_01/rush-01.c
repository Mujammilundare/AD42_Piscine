/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mundare <mundare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:16:57 by mundare           #+#    #+#             */
/*   Updated: 2024/02/18 20:47:44 by mundare          ###   ########.fr       */
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
void ft_putnewline();
void ft_putspace();
void ft_putint(int nb);
void fill_common_area1();
void fill_common_area2();
void fill_common_area3();
void fill_common_area4();
void ft_print_solution();
void ft_print_msg(char str[]);

int ft_left_to_right()
{
    return (1);
}

int ft_right_to_left()
{
    return (1);
}

int ft_up_to_down()
{
    return (1);
}

int ft_down_to_up()
{
    return (1);
}


void ft_solve()
{
    int output1;
    int output2;
    int output3;
    int output4;
    int i;
    
    i = 0;

    fill_common_area1();
    fill_common_area2();
    fill_common_area3();
    fill_common_area4();
    
    while (i < 1)
    {
       output1 = ft_left_to_right();
       output2 = ft_right_to_left();
       output3 = ft_up_to_down();
       output4 = ft_down_to_up();
       i++;
    }
    if (output1 || output2 || output3 || output4)
        ft_print_solution();
    else
        ft_print_msg("Error");
}