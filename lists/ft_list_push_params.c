/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 17:49:55 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/20 18:00:56 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_fronts(t_list **begin_list, void *data)
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

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;

	i = 1;
	begin_list = NULL;
	if (ac > 1)
		while (i < ac)
		{
			ft_list_push_fronts(&begin_list, av[i]);
			i++;
		}
	return (begin_list);
}
