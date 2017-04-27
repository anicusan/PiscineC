/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 23:38:07 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/20 23:40:34 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *x;

	x = *begin_list1;
	if (!x)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (x->next)
	{
		x = x->next;
	}
	x->next = begin_list2;
}
