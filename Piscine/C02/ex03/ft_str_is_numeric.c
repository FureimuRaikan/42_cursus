/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:51:55 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/01 14:46:39 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 48 || 57 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	text[] =  "";
	printf("%d", ft_str_is_numeric(text));
	return (0);
}
*/
