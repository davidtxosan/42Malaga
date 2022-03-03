/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:01:30 by davidsan          #+#    #+#             */
/*   Updated: 2022/03/01 09:42:09 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_sqrt(int nb)
{
	long	a;
	long	b;

	a = nb;
	b = 1;
	while (a > b)
	{
		a = (a + b) / 2;
		b = nb / a;
	}
	if ((a * a) == nb)
		return (a);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(1577536));
	return (0);
}
*/
