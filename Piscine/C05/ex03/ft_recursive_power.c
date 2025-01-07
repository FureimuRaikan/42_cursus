/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:54:38 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/13 13:51:06 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = (nb * 10) + str[i] - 48;
		i++;
	}
	return nb;
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_recursive_power(ft_atoi(argv[1]), ft_atoi(argv[2])));
	return (0);
}

