/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:46:26 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/17 21:01:33 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int x;
	int y;

	x = 20;
	y = 10;
	int *div = &x;
	int *mod = &y;

	ft_div_mod(x, y, div, mod);
	printf("el valor de la division de a y b  es : %d\n",*div);
	printf("el resto de la division de a y de b es: %d", *mod);
}
*/
