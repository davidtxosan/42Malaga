/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:33:50 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/21 09:45:03 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] >= 32 && str[n] <= 126)
			n++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	result;
	char	a[] = "4";

	ft_str_is_printable(a);
	result = ft_str_is_printable(a);
	printf("%d", result);
}
*/
