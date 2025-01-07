/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:51:55 by yguinio           #+#    #+#             */
/*   Updated: 2024/06/30 14:03:54 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (96 < str[i] && str[i] < 123)
		{
			str[i] -= 32 ;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	text[] =  "Bonjour. Je suis plutot content !";
	ft_strupcase(text);
	printf("%s", text);
	return (0);
}
*/
