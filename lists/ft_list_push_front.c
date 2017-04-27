/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 16:21:58 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/20 17:05:11 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *x;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		x = ft_create_elem(data);
		x->next = *begin_list;
		*begin_list = x;
	}
}
