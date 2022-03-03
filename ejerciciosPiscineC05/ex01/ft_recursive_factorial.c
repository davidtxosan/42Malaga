/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:56:27 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/28 17:03:30 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial (nb -1);
			nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
	return(0);
}
*/
