/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:12:45 by yguinio           #+#    #+#             */
/*   Updated: 2024/11/22 13:34:29 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_len(int n)
{	
	int		i;
	char	*nbr;

	nbr = ft_itoa(n);
	i = ft_putstr_len(nbr);
	free (nbr);
	return (i);
}

int	ft_putunbr_len(unsigned int n)
{
	int		i;
	char	*nbr;

	nbr = ft_uitoa(n);
	i = ft_putstr_len(nbr);
	free (nbr);
	return (i);
}
