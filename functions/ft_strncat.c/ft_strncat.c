/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 00:23:12 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/12 00:23:23 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, int n)
{
	char *swap;

	if (dest && src)
	{
		swap = dest;
		while (*swap)
			swap++;
		while (*src && n-- > 0)
		{
			*swap = *src;
			swap++;
			src++;
		}
		*swap = '\0';
	}
	return (dest);
}
