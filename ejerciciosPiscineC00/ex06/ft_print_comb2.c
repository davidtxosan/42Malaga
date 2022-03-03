/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:14:46 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/19 17:29:29 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	recuento(int x)
{
	char	array[2];

	array[0] = x / 10 + '0';
	array[1] = x % 10 + '0';
	write(1, array, 2);
}

void	ft_print_comb2(void)
{
	int	z;
	int	y;

	z = 00;
	y = 01;
	while (z <= 97)
	{
		while (y <= 99)
		{
			recuento(z);
			write(1, " ", 1);
			recuento(y);
			write(1, ", ", 2);
			y++;
		}
		z++;
		y = z + 1;
	}
	write(1, "98 99", 5);
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/