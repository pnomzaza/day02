/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:59:51 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/19 17:15:02 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write( 1, &c, 1);
}

void ft_print_numbers(void)
{
	char num;
	
	num = '0';

	while( num <= '9')
	{

		ft_putchar(num);
		num++;
		
	}
}

int main()
{
	ft_print_numbers();
}

