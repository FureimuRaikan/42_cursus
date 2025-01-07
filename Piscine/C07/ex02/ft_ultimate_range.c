/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:17:15 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/17 15:00:14 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (max <= min)
	{
		*range = (NULL);
		return (0);
	}
	range[0] = (int *)malloc(sizeof(int) * size);
	if (range[0] == 0)
	{
		return (-1);
	}
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main()
{
	int	**range;
	int	min = 2;
	int	max = 5;

	range = (int **)malloc(sizeof(int *) * 1);
	printf("%d\n", ft_ultimate_range(range, 2, 5));
	for (int i = 0; i < max - min; i++)
		printf("%d\n", range[0][i]);
	for(int i = 0; i < max - min; i++){
		free(range[i]);
	}
	free(range);
	return(0);
}
*/
