/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:04:46 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/17 21:07:42 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 10;
	y = 5;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);
	printf("la division es: %d\n",*a);
	printf("el modulo es : %d\n", *b);
}
*/
