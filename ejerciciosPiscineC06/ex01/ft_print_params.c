/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:56:11 by davidsan          #+#    #+#             */
/*   Updated: 2022/03/03 12:18:57 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		str = argv[i];
		while (str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
