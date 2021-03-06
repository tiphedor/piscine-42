/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:26:45 by plam              #+#    #+#             */
/*   Updated: 2017/07/09 13:23:48 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_rush(int pos_x, int pos_y, int col, int row)
{
	if ((pos_x == 0 && pos_y == 0)
	|| (pos_x == col - 1 && pos_y == row - 1 && row > 1 && col > 1))
		ft_putchar('/');
	else if ((row == 1 && pos_x == col - 1 && pos_y == row - 1)
			|| (pos_x == 0 && pos_y == row - 1)
			|| (pos_x == col - 1 && pos_y == 0))
		ft_putchar('\\');
	else if (pos_x == 0 || pos_y == 0
	|| pos_x == col - 1 || pos_y == row - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int col, int row)
{
	int pos_x;
	int pos_y;

	if (col < 0 || row < 0)
		return ;
	pos_x = 0;
	pos_y = 0;
	while (pos_y < row)
	{
		pos_x = 0;
		while (pos_x < col)
		{
			print_rush(pos_x, pos_y, col, row);
			pos_x++;
		}
		pos_y++;
		ft_putchar('\n');
	}
}
