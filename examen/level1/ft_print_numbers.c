/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:40:57 by davidsan          #+#    #+#             */
/*   Updated: 2022/03/01 18:47:59 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_numbers(void)
{
	int num;

	num = '0';
	while(num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}

int	main(void)
{
	ft_numbers();
	return(0);
}
