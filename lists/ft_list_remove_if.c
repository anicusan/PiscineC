/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:12:14 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/20 23:35:17 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	recrem(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *aux;

	if ((*begin_list).next)
	{
		if ((*cmp)(((*begin_list).next)->data, data_ref) == 0)
		{
			aux = (*begin_list).next;
			(*begin_list).next = ((*begin_list).next)->next;
			free(aux);
			recrem(begin_list, data_ref, cmp);
		}
		else
			recrem((*begin_list).next, data_ref, cmp);
	}
	if ((*begin_list).next == NULL && (*cmp)((*begin_list).data, data_ref) == 0)
	{
		begin_list = NULL;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *aux;

	if (begin_list && *begin_list)
	{
		if ((*cmp)((**begin_list).data, data_ref) == 0)
		{
			aux = *begin_list;
			*begin_list = (*begin_list)->next;
			free(aux);
			if (begin_list)
				ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			recrem(*begin_list, data_ref, cmp);
	}
}
