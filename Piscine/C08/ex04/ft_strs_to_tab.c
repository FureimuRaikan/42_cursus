/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:52:10 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/12 13:54:17 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.c>

struct s_stock_str	 *ft_strs_to_tab(int ac, char **av);

int	ft_strlen(char *str);
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}


