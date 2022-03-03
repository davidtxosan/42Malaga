/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:38:47 by davidsan          #+#    #+#             */
/*   Updated: 2022/03/02 08:52:20 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_num(nb)
{
	char num;
	if(nb > 9)
	{
		ft_num(nb / 10);
		ft_num(nb % 10);
	}
	else
	{
		num = nb + 48;
		write(1, &num, 1);
	}
}
int	main(void)
{
	int	i;

	i = 0;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "Fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else
			ft_num(i);
		write(1,"\n", 1);
		i++;
	}
	return (0);
}
