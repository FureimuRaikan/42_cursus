/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:59:04 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/09 11:23:46 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	root = 2;
	while ((root * root <= nb) && root <= 46340)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
/*
int	ft_atoi(char *str)
{	
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_sqrt(ft_atoi(argv[1])));
		return (0);
	}
	return (1);
}
*/
