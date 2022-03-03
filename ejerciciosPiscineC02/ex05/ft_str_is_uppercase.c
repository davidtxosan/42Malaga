/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:31:49 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/22 09:05:32 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] >= 65 && str[n] <= 90)
			n++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "Z";
	ft_str_is_uppercase(a);
	int result;
	result = ft_str_is_uppercase(a);
	printf("%d",result);
}
*/
