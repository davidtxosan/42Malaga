/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:04:27 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/22 20:19:33 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	h;

	i = 0;
	while (dest[i])
		i++;
	h = 0;
	while (src[h])
	{
		dest[i] = src[h];
		i++;
		h++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char a[20] = "goonies never ";
	char b[] = "say died";

	ft_strcat(a, b);
	printf("%s", a);
	return (0);
}
*/