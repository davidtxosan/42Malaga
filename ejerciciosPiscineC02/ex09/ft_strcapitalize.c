/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:15:20 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/23 11:33:56 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	b;
	int	i;

	i = 0;
	b = 0;
	while (str[b])
	{
		if (i == 0 && str[b] >= 'a' && str[b] <= 'z')
		{
			str[b] -= 32;
			i++;
		}
		else if (i > 0 && str[b] >= 'A' && str[b] <= 'Z')
			str[b] += 32;
		else if (!((str[b] >= 'a' && str[b] <= 'z')
			|| (str[b] >= 'A' && str[b] <= 'Z')))
			i = 0;
		else
			i ++;
		b++;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[] = "davicito 42 cesar";

	ft_strcapitalize(a);
	printf("%s", ft_strcapitalize(a));
	return (0);
}
*/
