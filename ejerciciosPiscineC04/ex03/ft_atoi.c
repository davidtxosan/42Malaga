/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:09:09 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/27 18:58:14 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_symbols(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	c;
	int	neg;
	int	num;

	c = ft_symbols(str);
	neg = 1;
	num = 0;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			neg *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		num *= 10;
		num += str[c] - 48;
		c++;
	}
	num *= neg;
	return (num);
}
/*
int	main(void)
{
    char a[] = "  +-1975 hola ";
    int	i;
    i = ft_atoi(a);
    printf("%d", i);
}
*/
