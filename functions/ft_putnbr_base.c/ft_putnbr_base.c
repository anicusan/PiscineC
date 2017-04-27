/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 00:29:11 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/12 00:29:27 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(const char *str)
{
	unsigned long i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int		ft_checkbase(char *base)
{
	long int i;
	long int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	nb2;
	long	int		div;
	long	int		result;
	long	int		baselen;

	baselen = ft_strlen(base);
	if (ft_checkbase(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		nb2 = nb;
		div = 1;
		while ((nb2 / div) >= baselen)
			div = div * baselen;
		while (div > 0)
		{
			result = ((nb2 / div) % baselen);
			ft_putchar(base[result]);
			div = div / baselen;
		}
	}
}
