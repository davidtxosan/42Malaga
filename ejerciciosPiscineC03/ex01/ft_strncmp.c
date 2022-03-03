/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:30:26 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/22 18:54:28 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 == 0 && *s1 == *s2)
			return (0);
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main (void)
{
    char a[] = "246";
    char b[] = "2468";
    
    printf("%d", ft_strncmp(a, b, 3));
    printf("%d", strncmp(a, b , 3));
    return (0);
}
*/
