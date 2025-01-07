/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:02:12 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/02 09:59:50 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	i;	

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int     main(void)
{
        char dest[5];
        char src[] = "Hello World!";
        printf("%u\n", ft_strlcpy(dest, src, 0));
        printf("%s", dest);
        return 0;
}
*/
