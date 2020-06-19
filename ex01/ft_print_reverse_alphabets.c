/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabets.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:31:04 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/19 16:59:48 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write( 1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char  letter;

	letter = 'z';

	while( letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
}
