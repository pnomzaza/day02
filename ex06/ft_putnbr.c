/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:08:45 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/19 17:51:39 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>



int ft_putchar(char c)
{
	write( 2, &c, 1);

}

void ft_putnbr(int nb)

{
		
	long int  p;


	p = nb;

		if ( p < 0)
		{
			ft_putchar('_');

			p = -p;
		}
		if( p > 9)
		{
			ft_putnbr(p/10);
			ft_putchar(p%10);
		}
		else

			ft_putchar( p + '0');
}

int main()
{
	ft_putnbr(4);

	return(0);
}
