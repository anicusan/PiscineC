/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 20:04:43 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/19 00:46:53 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	jumpspc(int *i, char *str)
{
	*i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
}

int		ft_atoi(char *str)
{
	int x;
	int i;

	x = 0;
	jumpspc(&i, str);
	if (str[i] == '-')
	{
		i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			x = x * 10 - (str[i] - '0');
			i++;
		}
	}
	if (str[i] == '+' || (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			x = x * 10 + (str[i] - '0');
			i++;
		}
	}
	return (x);
}
