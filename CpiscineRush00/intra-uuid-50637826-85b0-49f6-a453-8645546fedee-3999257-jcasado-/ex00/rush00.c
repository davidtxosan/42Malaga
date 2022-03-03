/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasado- <jcasado-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:10:01 by jcasado-          #+#    #+#             */
/*   Updated: 2022/02/16 16:27:15 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_filasminmax(int contx, int conty, int x, int y)
{
	if (conty == 1 || conty == y)
	{
		if (contx == 1 || contx == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
}

void	ft_filasmed(int contx, int conty, int x, int y)
{
	if (conty > 1 && conty < y)
	{
		if (contx == 1 || contx == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	contx;
	int	conty;

	contx = 1;
	conty = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Error!", 6);
	}
	else
	{
		while (conty < y + 1)
		{
			while (contx < x + 1)
			{	
				ft_filasminmax(contx, conty, x, y);
				ft_filasmed(contx, conty, x, y);
				contx++;
			}
			ft_putchar('\n');
			contx = 1;
			conty++;
		}
	}
}
