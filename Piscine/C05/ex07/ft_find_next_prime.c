/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:55:48 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/11 17:38:15 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_find_next_prime(int nb);

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (str[i])
	{	
		if (str[i] == '-')
			i++;
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	if (str[0] == '-')
		return (nbr * -1);
	return (nbr);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d", ft_find_next_prime(ft_atoi(argv[1])));
	return (0);
}
*/
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = nb;
	if (nb <= 2)
		return (2);
	while (!(ft_is_prime(next_prime)))
	{
		next_prime++;
	}
	return (next_prime);
}
