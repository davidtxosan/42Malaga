/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:58:27 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/20 12:07:58 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	orig[] = "inicio";
	char	destin[] = "finalizado";
	char	*result;

	printf("ANTES\n\torig: %s\n\tdestin: %s\n", orig, destin);
	result = ft_strcpy(destin, orig);
	printf("DESPUÉS\n\torig: %s\n\tdestin: %s", orig, result);
	return (0);
}
*/