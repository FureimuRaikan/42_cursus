/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:08:40 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/01 19:12:13 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex_convert(unsigned char c)
{
	unsigned char	temp;

	temp = c % 16;
	c = c / 16;
	ft_putchar(92);
	ft_putchar(c + 48);
	if (temp < 10)
	{
		ft_putchar(temp + 48);
	}
	else
	{
		ft_putchar(temp + 87);
	}
}

int	ft_str_is_printable(char *str)
{
	if (*str > 31 && *str < 127)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str + i) == 0)
		{
			ft_hex_convert(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
/*
int	main(void)
{
	char	text[] = "Coucou\n\ntu vas bien ?";
	ft_putstr_non_printable(text);
	return (0);
}
*/
