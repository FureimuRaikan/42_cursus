/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:24:20 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/01 15:27:14 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
void	ft_char_upcase(char *str)
{	
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32 ;
	}
}

void	ft_char_lowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		*str += 32 ;
	}
}

int	ft_str_is_alphanum(char *str)
{
	if (('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z'))
	{
		return (1);
	}
	if ('0' <= *str && '9' >= *str)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{			
		if (ft_str_is_alphanum(str + i) == 1)
		{	
			ft_char_upcase(str + i);
			i++;
			while (ft_str_is_alphanum(str + i) == 1)
			{
				ft_char_lowcase(str + i);
				i++;
			}
		}
		i++;
	}
	return (str);
}
/*
int   main(void)
{
        char    str[] = "";
        printf("%s", ft_strcapitalize(str));
        return 0;
}
*/
