/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:03:14 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/05 13:00:37 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j] && to_find[j] != '\0')
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i - j]);
			j = 0;
		//	i--;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*txt1 = "Je suis ica ico ic ici, tu m'as trouve.";
	char	*txt2 = "ici";
	printf("%s", ft_strstr(txt1, txt2));
	return (0);
}

