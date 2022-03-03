/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:26:28 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/22 12:14:17 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char	one[] = "ab";
	char	two[] = "cd";
	ft_strcmp(one, two);
	printf("%d", ft_strcmp(one, two));
	return (0);
}
*/
