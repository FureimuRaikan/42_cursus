/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:56:03 by yguinio           #+#    #+#             */
/*   Updated: 2024/06/28 14:04:39 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *#include<stdio.h>
 */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	*mirror_tab;

	counter = 0;
	mirror_tab = tab + size - 1;
	while (counter < size / 2)
	{
		ft_swap(tab, mirror_tab);
		++tab;
		--mirror_tab;
		++counter;
	}
}

/*
int     main()
{
        int     tableau[6]={1, 2, 3, 4, 5, 6};
        ft_rev_int_tab(tableau, 6);
        for (int i = 0; i<6 ; i++)
        {
                printf("%d, ", tableau[i]);
        }
        return (0);
}
*/
