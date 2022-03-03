/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is-alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:17:46 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/21 09:09:08 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if ((str[n] >= 65 && str[n] <= 90) || (str[n] >= 97 && str[n] <= 122))
			n++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "a0";
	int	result;

	ft_str_is_alpha(a);
	result = ft_str_is_alpha(a);
	printf("%d", result);
}
*/