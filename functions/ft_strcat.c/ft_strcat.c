/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 00:22:24 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/12 00:22:36 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	unsigned long i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, const char *s2)
{
	unsigned long i;

	if (s1 && s2)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = s2[i];
	}
	return (s1);
}

char	*ft_strcat(char *dest, char *src)
{
	if (dest && src)
		ft_strcpy(&dest[ft_strlen(dest)], src);
	return (dest);
}
