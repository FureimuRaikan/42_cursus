/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:53:03 by yguinio           #+#    #+#             */
/*   Updated: 2024/11/26 09:24:26 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = NULL;
	printf(" | %d\n", printf(0));
	printf(" | %d\n", ft_printf(0));
	return (0);
}
