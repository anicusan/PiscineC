/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 22:44:53 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/12 22:44:56 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char *c = "plopaplopalp amen ioooooi \n";

	ft_print_memory(c, 15);
	return (0);
}
