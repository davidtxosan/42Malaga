/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:05:20 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/21 11:14:23 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[] = "DAVID";

	ft_strlowcase(a);
	printf("%s", ft_strlowcase(a));
	return (0);
}
*/
