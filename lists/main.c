/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 20:26:34 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/20 23:41:48 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_list_push_front(t_list **begin_list, void	*data);

int		ft_list_size(t_list *begin_list);

t_list	*ft_list_last(t_list *begin_list);

t_list  *ft_list_push_params(int ac, char **av);

void	ft_list_clear(t_list **begin_list);

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

void	ft_list_reverse(t_list **begin_list);

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

void	ftest(void *x)
{
	printf("ftest %s\n", x);
}

int		main(int argc, char **argv)
{
	t_list	*begin_list;
	t
	t_list	*x;
	t_list	*listat;
	char	s1[] = "dumnezeu";
//	char	s2[] = "este";
//	char	*s3 = "hadevarat";

	begin_list = NULL;
//	begin_list = ft_create_elem(s1);
	begin_list = ft_list_push_params(argc, argv);
	printf("size %d\n", ft_list_size(begin_list));
	if (ft_list_last(begin_list))
		printf("last %s\n", ft_list_last(begin_list)->data);
	listat = ft_list_at(begin_list, 3);
	if (listat)
		printf("the nbr elem %s\n", listat->data);
	ft_list_reverse(&begin_list);
	ft_list_remove_if(&begin_list, s1, &strcmp);
	x = begin_list;
	while (x)
	{
		printf("elems %s\n", x->data);
		x = x->next;
	}
	return (0);
}
