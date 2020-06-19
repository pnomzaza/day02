/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:27:33 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/19 17:24:35 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write( 1, &c, 1);

}

void ft_print_comb2(void)
{
	int i;
	int j;
		
	i = 0;
	i = 0 - 1;

	while( ++i <= 99)
	{
		 
		j = 0;

		while( ++j <= 98)
		{ 
		

		   	if( i <= 9)
		   {
		   		ft_putchar('0');
				ft_putchar(i + '0');
		   }
 		   else
	   	   {
				ft_putchar( i/10 + '0');
				ft_putchar( i%10 + '0');
		   } 
			
		ft_putchar(' ');

		if( j <= 9)
		{
			ft_putchar('0');
			ft_putchar( j + '0');
		}	
		
		else
		{
			ft_putchar( j/10 + '0');
			ft_putchar( j%10 + '0');
		}
		
		ft_putchar(',');
		ft_putchar(' ');
		}			

	}
	
}

int main()
{
	ft_print_comb2();

	return (0);

}
