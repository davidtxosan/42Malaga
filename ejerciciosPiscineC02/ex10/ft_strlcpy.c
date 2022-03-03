/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:12:13 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/22 11:01:09 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	i++;
	return (i);
}
/*
int	main(void)
{
	unsigned int	s;
	char	orig[] = "archivo origen";
	char	destin[] = "destino";

	s = 4;
	printf("ANTES\n\torig: %s\n\tdestin: %s\n\tsize: %d\n", orig, destin, s);
	s = ft_strlcpy(destin, orig, s);
	printf("DESPUES\n\torig: %s\n\tdestin: %s\n\tsize: %d\n", orig, destin, s);
	return (0);
}
*/
