/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:49:32 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/24 17:19:57 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c] != '\0') && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
	dest[c] = '\0';
	c++;
	}
	return (dest);
}
/*
int	main(void)
{	

	unsigned int n;
	n = 16;
	char src[] = "source string";
	char dest[] = "destination string";
	char	*ft_strncpy(char *dest, char *src, unsigned int n);

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
*/
