/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:38:31 by yguinio           #+#    #+#             */
/*   Updated: 2024/11/22 09:49:58 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*firstelt;
	t_list	*newelt;

	if (!lst || !f || !del)
		return (NULL);
	firstelt = NULL;
	while (lst)
	{
		newelt = ft_lstnew((*f)(lst->content));
		if (!newelt)
		{
			while (firstelt)
			{
				newelt = firstelt->next;
				(*del)(firstelt->content);
				free(firstelt);
				firstelt = newelt;
			}
		}
		ft_lstadd_back(&firstelt, newelt);
		lst = lst->next;
	}
	return (firstelt);
}
