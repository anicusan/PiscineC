/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 17:03:05 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/12 20:29:29 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	hexbase(char c, char *hex)
{
	if (c / 16 != 0)
		hexbase(c / 16, hex);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			ft_putchar('\\');
			if (str[i] <= 15)
				ft_putchar('0');
			hexbase(str[i], "0123456789abcdef");
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
