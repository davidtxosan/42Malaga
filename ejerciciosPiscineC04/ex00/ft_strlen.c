/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:07:20 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/24 18:07:23 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str [x])
	x++;
	return (x);
}
/*
int main(void)
{
	char a[] = "david";
	printf("%d", ft_strlen(a));
	return (0);
}
*/