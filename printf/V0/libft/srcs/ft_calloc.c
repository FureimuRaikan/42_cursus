/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:18:10 by yguinio           #+#    #+#             */
/*   Updated: 2024/11/22 09:49:58 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buff;
	size_t	bytes;

	bytes = nmemb * size;
	if (size && (bytes / size) != nmemb)
		return (NULL);
	buff = (void *)malloc(size * nmemb);
	if (!buff)
		return (NULL);
	ft_bzero(buff, bytes);
	return (buff);
}
