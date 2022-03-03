/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:27:25 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/19 17:08:45 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	str;
	int	count;

	count = 0;
	while ((size / 2) > count)
	{
		str = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = str;
		count++;
	}
}
