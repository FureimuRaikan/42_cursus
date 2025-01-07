/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:39:24 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/17 15:52:30 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*array;
	char	*pointer;

	i = 0;
	array = (char *)malloc(sizeof(char [ft_total_len(size, strs, sep)]));
	if (!array)
		return (NULL);
	pointer = array;
	while (i < size && size != 0)
	{
		ft_strcpy(pointer, strs[i]);
		pointer += ft_strlen(strs[i]);
		if (i < size -1)
		{
			ft_strcpy(pointer, sep);
			pointer += ft_strlen(sep);
		}
		i++;
	}
	*pointer = 0;
	return (array);
}
/*
int	main()
{
	char *sep = " ";
	char **strs = malloc(sizeof(char) * 3);
	strs[0] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (1 + 1));
	strs[0] = "hello";
	strs[1] = "world";
	strs[2] = "!";
	printf("%s\n", ft_strjoin(2, &*strs, sep));
	return (0);
}
*/
