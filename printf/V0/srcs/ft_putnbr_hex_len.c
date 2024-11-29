/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:31:56 by yguinio           #+#    #+#             */
/*   Updated: 2024/11/22 12:45:37 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_hex_len(unsigned int n)
{
	char	*base;
	int		i;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_putnbr_hex_len(n / 16);
	i = n % 16;
	write(1, &base[i], 1);
	len++;
	return (len);
}

int	ft_putnbr_hex_len_up(unsigned int n)
{
	char	*base;
	int		i;
	int		len;

	base = "0123456789ABCDEF";
	len = 0;
	if (n >= 16)
		len += ft_putnbr_hex_len_up(n / 16);
	i = n % 16;
	write(1, &base[i], 1);
	len++;
	return (len);
}
