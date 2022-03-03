/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:04:45 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/23 09:32:41 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	h;

	i = 0;
	h = 0;
	while (dest[i] != '\0')
		i++;
	while (src[h] != '\0' && h < nb)
	{
		dest[i + h] = src[h];
		h++;
	}
	dest[i + h] = '\0';
	return (dest);
}
/*
int main(void)
{
	char a[22] = "goonies never ";
	char b[] = "say died";
    unsigned int size = 6;
	ft_strncat(a, b, size);
	printf("%s", a);
	return (0);
}
*/
