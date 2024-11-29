/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:29:37 by yguinio           #+#    #+#             */
/*   Updated: 2024/11/22 13:08:15 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_unblen_base(unsigned long int n, const char *base)
{
	size_t			i;
	const size_t	baselen = ft_strlen(base);

	i = 1;
	while (n > baselen - 1)
	{
		n /= (baselen);
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	size_t			i;
	char			*str;
	size_t const	nblen = ft_unblen_base(n, "0123456789");

	i = 0;
	str = (char *)malloc(sizeof(char) * (nblen + 1));
	if (!str)
		return (NULL);
	while (n > 9)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	str[i++] = n + 48;
	str[i] = 0;
	return (ft_reverse(str));
}

char	*ft_ulitoa_base(unsigned long int n, const char *base)
{
	size_t			i;
	char			*str;
	size_t const	nblen = ft_unblen_base(n, base);
	size_t const	baselen = ft_strlen(base);

	i = 0;
	str = (char *)malloc(sizeof(char) * (nblen + 1));
	if (!str)
		return (NULL);
	while (n > ft_unblen_base(n, base))
	{
		str[i] = base[(n % baselen)];
		n /= baselen;
		i++;
	}
	if (n)
		str[i++] = base[(n % baselen)];
	str[i] = 0;
	return (ft_reverse(str));
}
