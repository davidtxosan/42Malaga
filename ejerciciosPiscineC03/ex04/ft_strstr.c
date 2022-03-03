/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:04:59 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/23 16:50:54 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	error;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		if (*str == to_find[0])
		{
			c = 0;
			error = 0;
			while (to_find[c])
			{
				if (str[c] != to_find[c])
					error = 1;
				c++;
			}
			if (error == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main (void)
{
	char *a = "goonies nev never ";
	char *b = "never";

	printf("%s", ft_strstr(a, b));
	return (0);
}
*/
