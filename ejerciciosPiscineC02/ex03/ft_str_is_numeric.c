/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:48:25 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/21 09:18:45 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] >= 48 && str[n] <= 57)
			n++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "a";
	ft_str_is_numeric(a);
	int	result;
	result = ft_str_is_numeric(a);
	printf("%d", result);
}
*/
