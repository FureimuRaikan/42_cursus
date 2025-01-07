/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:39:06 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/07 17:11:57 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result = nb * result;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	nb = 2;
	int	power = 16;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
*/
