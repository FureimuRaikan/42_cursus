/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:42:51 by yguinio           #+#    #+#             */
/*   Updated: 2024/06/29 11:08:52 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		++str;
		++count;
	}
	return (count);
}

/*int	main(void)
{
	char	*o;
	o = "Bonjour les gens";
	printf("%d", ft_strlen(o));
	return (0);
}*/
