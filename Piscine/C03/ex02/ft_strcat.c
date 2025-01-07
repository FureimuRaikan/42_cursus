/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:47:55 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/02 18:07:01 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (src[i] != '\0')
	{
		dest[i + size] = src[i];
		i++;
	}
	dest[i + size] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src = "on654";
	char	dest[15] = "Bonjour";
	printf("%s", ft_strcat(dest, src));
	return (0);
}
*/
