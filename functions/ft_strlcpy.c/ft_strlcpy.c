/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 00:26:14 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/12 00:26:33 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(const char *str)
{
	unsigned long	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char			*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	srclen;
	unsigned int	newlen;

	srclen = ft_strlen(src);
	if (n == 0)
		return (srclen);
	if (srclen >= n)
		newlen = n - 1;
	else
		newlen = srclen;
	ft_strncpy(dest, src, newlen);
	dest[newlen] = '\0';
	return (srclen);
}
