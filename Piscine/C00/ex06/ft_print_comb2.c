/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:35:27 by yguinio           #+#    #+#             */
/*   Updated: 2024/06/27 11:54:52 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int i, int j)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = i / 10 ;
	n1 += 48;
	n2 = i % 10;
	n2 += 48;
	n3 = j / 10 ;
	n3 += 48;
	n4 = j % 10 ;
	n4 += 48 ;
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(' ');
	ft_putchar(n3);
	ft_putchar(n4);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_number(a, b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}	
		a++;
	}
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
