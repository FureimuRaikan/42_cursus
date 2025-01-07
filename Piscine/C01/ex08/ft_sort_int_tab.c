/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:40:14 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/07 18:02:44 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			++j;
		}
		++i;
	}
}
/*
int	main()
{
	int	tab[6] = {56, 32, 65, 12, 98, 2};
	
	ft_sort_int_tab(tab, 6);
	for (int i=0 ; i<6 ; i++)
	{	
		printf("%d, ", tab[i]);
	}
	return (0);
}*/
