/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:51:55 by yguinio           #+#    #+#             */
/*   Updated: 2024/06/30 14:22:32 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (64 < str[i] && str[i] < 91)
		{
			str[i] += 32 ;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	text[] =  "un deux TROIS 098098-+%^&*(";
	ft_strlowcase(text);
	printf("%s", text);
	return (0);
}
*/
