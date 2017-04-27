/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 00:30:10 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/12 00:30:22 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_base(char c, char *base)
{
	int	i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && j != i)
				return (-1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_findnbr(int i, int base_nbr, char *str, char *base)
{
	int number;

	number = 0;
	while (str[i] != '\0')
	{
		if (ft_find_base(str[i], base) == -1)
			return (0);
		number *= base_nbr;
		number += (ft_find_base(str[i], base));
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (number);
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	negative;
	int i;
	int number;

	i = 0;
	negative = 1;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	if (str[0] == '-')
		negative = -1;
	number = ft_findnbr(i, ft_strlen(base), str, base);
	return (number * negative);
}
