/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:10:52 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/19 13:45:31 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write( 1, &c, 1);
}

void ft_is_negative(int n)
{

	if ( n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('Y');
	}

}

int main()
{
	ft_is_negative(-1);

	return (0);
}
