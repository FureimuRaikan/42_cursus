/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:42:41 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/11 17:37:45 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_is_prime(int nb);

int	ft_atoi(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i])
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	if (str[i] == '-')
		return (nb * -1);
	return (nb);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_is_prime(ft_atoi(argv[1])));
		return (0);
	}
	return (1);
}
*/
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb && i < 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
