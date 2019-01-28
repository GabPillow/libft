/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 17:09:33 by grochefo          #+#    #+#             */
/*   Updated: 2019/01/28 15:24:06 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*copy(char *s, int n, int i)
{
	if (n == -2147483648)
	{
		ft_strcpy(&s[1], "2147483648");
		return (s);
	}
	if (n < 0)
		n = n * -1;
	if (n <= 9)
		s[i] = n + '0';
	else
	{
		copy(s, n / 10, i - 1);
		s[i] = (n % 10) + '0';
	}
	return (s);
}

char			*ft_itoa(int n)
{
	char	*str_new;
	int		i;
	int		svg;

	svg = n;
	i = 1;
	while (svg > 9 || svg < -9)
	{
		svg = svg / 10;
		i++;
	}
	if (n < 0)
	{
		if (!(str_new = (char*)ft_memalloc(i + 2)))
			return (NULL);
		str_new[0] = '-';
		i = i + 1;
	}
	else if (!(str_new = (char*)ft_memalloc(i + 1)))
		return (NULL);
	copy(str_new, n, i - 1);
	str_new[i] = '\0';
	return (str_new);
}
