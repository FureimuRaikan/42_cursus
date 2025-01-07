/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:03:33 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/11 17:37:22 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_atoi(char *str);
int	ft_fibonacci(int index);
int	main(int argc, char **argv);

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = (nb * 10) + str[i] - 48;
		i++;
	}
	return (nb);
}
*/
int	ft_fibonacci(int index)
{
	int	fibonacci;

	fibonacci = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_fibonacci(ft_atoi(argv[1])));
		return (0);
	}
	return (1);
}
*/
