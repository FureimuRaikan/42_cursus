/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:15:56 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/04 15:21:21 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sign_space(char *str, int *num_start)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*num_start = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sign;

	nbr = 0;
	sign = ft_sign_space(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = ((nbr * 10) + str[i]) - 48;
		i++;
	}
	return (nbr * sign);
}
/*
int	main(void)
{
	char	str[] = "     +-+-+--6584";
	printf("%d", ft_atoi(str));
	return (0);
}
*/
