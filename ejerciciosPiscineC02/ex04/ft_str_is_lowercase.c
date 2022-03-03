/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:51:09 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/22 09:07:24 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] >= 97 && str[n] <= 122)
			n++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "A";
	ft_str_is_lowercase(a);
	int result;
	result = ft_str_is_lowercase(a);
	printf("%d",result);
}
*/
