/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 20:45:14 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/20 21:09:03 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*x1;
	t_list	*x2;
	t_list	*aux;

	if (!*begin_list || !(*begin_list)->next)
		return ;
	x1 = *begin_list;
	x2 = (*begin_list)->next;
	x1->next = NULL;
	while (x2)
	{
		aux = x2;
		x2 = x2->next;
		aux->next = x1;
		x1 = aux;
	}
	*begin_list = x1;
}
