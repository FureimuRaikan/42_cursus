/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:34:34 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/13 16:30:51 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_base_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_is_whitespace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_get_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	is_negative;
	int	number;
	int	i;
	int	base_size;

	base_size = ft_check_base_size(base);
	is_negative = 1;
	number = 0;
	i = 0;
	if (base_size < 2)
		return (0);
	while (ft_is_whitespace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (ft_get_in_base(str[i], base) != -1 && base_size >= 2)
	{
		number = (number * base_size) + ft_get_in_base(str[i], base);
		i++;
	}
	return (number * is_negative);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 0)
		return (1);
	printf("%d\n", ft_atoi_base(argv[1], argv [2]));
	return (0);
}*/
