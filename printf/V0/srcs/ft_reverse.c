/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:31:25 by yguinio           #+#    #+#             */
/*   Updated: 2024/11/22 12:31:55 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_reverse(char *str)
{
	size_t			i;
	size_t const	len = ft_strlen(str) - 1;
	char			temp;

	i = 0;
	while (i <= (len) / 2)
	{
		temp = str[len - i];
		str[len - i] = str[i];
		str[i] = temp;
		i++;
	}
	return (str);
}
