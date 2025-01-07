/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:51:20 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/15 11:14:43 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tableau;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	tableau = (int *)malloc(sizeof(int) * size);
	if (!tableau)
		return (NULL);
	while (i < size)
	{
		tableau[i] = min + i;
		i++;
	}
	return (tableau);
}
/*
#include <stdio.h>

int	main()
{
	int	i = 0;
	int	min = 5;
	int	max = 4;
	int	size = max - min;
	while (i < size)
	{
		printf("%d ", ft_range(min, max)[i]);
		i++;
	}
	free(ft_range(min, max));
	return (0);
}
*/
