/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:25:05 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/19 15:19:25 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write( 1, &c, 1);
}

void ft_print_comb(void)
{
    int num1;
	int num2;
    int num3;
	
	num1 = '0';
	num1 = '0' - 1;

	while( ++num1 <= '9')
	{
		num2 = num1;

		while( ++num2 <= '9')
		{
			num3 = num2;

			while( ++num3 <='9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);

				ft_putchar(',');
				ft_putchar(' ');
				

			}
		}
	}



}

int main()
{
	ft_print_comb();

	return(0);
}
