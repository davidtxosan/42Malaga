/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:18:04 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/18 11:40:47 by davidsan         ###   ########.fr       */
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

	int i = ft_strlen(a);
	printf("%d", i);
}
*/
