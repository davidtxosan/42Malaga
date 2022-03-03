/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:29:17 by davidsan          #+#    #+#             */
/*   Updated: 2022/03/03 11:15:24 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = argc - 1;
	while (i > 0)
	{
		str = argv[i];
		j = 0;
		while (str[j] && argc)
		{
			write(1, &str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
