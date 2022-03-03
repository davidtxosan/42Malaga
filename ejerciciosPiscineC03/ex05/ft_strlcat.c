/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:05:13 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/22 19:05:17 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	printleft;
	unsigned int	count;

	count = 0;
	destlen = 0;
	while (dest[destlen] != 0)
		destlen++;
	dest += destlen;
	while (src[count] != 0)
		count++;
	printleft = size - destlen - 1;
	while (*src != 0 && printleft > 0)
	{
		*(dest++) = *(src++);
		printleft--;
	}
	if (!(size == 0))
		*dest = 0;
	return (destlen + count);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[12] = "goonies";
	char b[] = " never say died";

	//printf("%lu\n%s\n", strlcat(a, b, 10), a);
	printf("%u\n%s", ft_strlcat(a, b, 10), a);
}
*/
