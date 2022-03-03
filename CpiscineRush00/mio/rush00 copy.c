/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:43:19 by davidsan          #+#    #+#             */
/*   Updated: 2022/02/13 16:50:40 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void rush00(int x, int y, int contx, int conty )
{	
	contx = 1;
	conty = 1;
    
    while(conty <= y)
    {
        if (conty == 1 || conty == y)
        {   contx =1;
            while(contx <= x)
            {
                if(contx == 1 || contx == x)
                    ft_putchar('o');
                else if (contx < x)
                    ft_putchar('-');
                contx++;
            }
        }
        else if (conty < y)
        {   
            contx = 1;
                while(contx <= x)
                {
                if(contx == 1 || contx == x)
                    ft_putchar('|');
                    else if (contx < x)
                        ft_putchar(' ');
                        contx++;
                }
        }
        conty++;
        ft_putchar('\n');
    }
}

/*
if (x < 1 || y < 1 || x > 2147483647 || y > 2147483647)
{
    ft_putchar (1, "Error", 5);
} 
else
*/
