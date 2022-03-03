/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:32:05 by davidsan          #+#    #+#             */
/*   Updated: 2022/03/02 10:53:41 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_len(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}
char *ft_invnum(char *str)
{
	int i;
	i = (ft_len(str) - 1);
	while(i >=0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}
int main(void)
{
	char a[] = "davicito on the night";
	ft_invnum(a);
	return (0);
}
