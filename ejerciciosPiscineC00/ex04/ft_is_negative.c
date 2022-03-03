/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:27:29 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/16 11:43:19 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	positivo = 'P';
	negativo = 'N';
	if (n >= 0)
	{
		write(1, &positivo, 1);
	}
	else
	{
		write (1, &negativo, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(-3);
	return (0);
}
*/
