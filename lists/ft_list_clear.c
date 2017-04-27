/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 19:26:30 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/20 19:35:09 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	reclear(t_list **begin_list)
{
	if ((*begin_list)->next)
		reclear(&((*begin_list)->next));
	*(begin_list) = NULL;
}

void	ft_list_clear(t_list **begin_list)
{
	reclear(begin_list);
	begin_list = NULL;
}
