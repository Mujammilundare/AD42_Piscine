/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:56:55 by mkazamel          #+#    #+#             */
/*   Updated: 2024/02/10 17:27:58 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_check(int col, int row, int col_sz, int row_sz)
{
	if (col == 1 && (row == 1 || row == row_sz))
		ft_putchar('A');
	else if (col == col_sz && (row == 1 || row == row_sz))
		ft_putchar('C');
	else if ((col > 1 && col < col_sz) && (row > 1 && row < row_sz))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	row_sz;
	int	col_sz;
	int	row;
	int	col;

	row_sz = y;
	col_sz = x;
	row = 1;
	col = 1;
	while (row <= row_sz)
	{
		col = 1;
		while (col <= col_sz)
		{
			ft_check(col, row, col_sz, row_sz);
			col++;
		}
		if (row_sz > 0 && col_sz > 0)
			ft_putchar('\n');
		row++;
	}
}
