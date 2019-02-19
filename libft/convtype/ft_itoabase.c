/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:10:07 by grochefo          #+#    #+#             */
/*   Updated: 2019/02/19 16:48:51 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_howmanynb(int n, char *str, int base)
{
	int		nb;
	int		s;

	s = 0;
	nb = 0;
	if (n < 0 && base == 10)
		s = 1;
	while (n >= 10 || n <= -10)
	{
		n /= base;
		nb++;
	}
	if (!(str = ft_strnew(nb + s)))
		return (NULL);
	if (s)
		str[nb] = '-';
	return (str);
}

char			*ft_itoabase(int n, char *base)
{
	char	*str;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = ft_howmanynb(n, str, ft_strlen(base));
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		str[i++] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	str = ft_strrev(str);
	return (str);
}
