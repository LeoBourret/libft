/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebourre <lebourre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:21:37 by lebourre          #+#    #+#             */
/*   Updated: 2020/11/16 18:21:38 by lebourre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t data_ammout, size_t size)
{
	char *new;

	if (!(new = malloc(data_ammout * size)))
		return (NULL);
	ft_memset(new, 0, data_ammout * size);
	return (new);
}
