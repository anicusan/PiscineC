/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 20:13:38 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/20 20:30:22 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (NULL);
	if (nbr > 1)
		return (ft_list_at(begin_list->next, nbr - 1));
	if (nbr == 1)
		return (begin_list);
	return (NULL);
}
