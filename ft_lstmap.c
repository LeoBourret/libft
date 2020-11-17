/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebourre <lebourre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:22:35 by lebourre          #+#    #+#             */
/*   Updated: 2020/11/16 18:22:36 by lebourre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_elem;
	t_list *new_list;

	while (lst)
	{
		if (!(new_elem = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new_elem);
	}
	return (new_list);
}
