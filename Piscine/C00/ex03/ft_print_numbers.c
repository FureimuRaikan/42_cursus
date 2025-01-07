/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:47:08 by yguinio           #+#    #+#             */
/*   Updated: 2024/06/27 15:02:21 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnum(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	a;

	a = '0' ;
	while (a <= '9')
	{
		ft_putnum(a);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
