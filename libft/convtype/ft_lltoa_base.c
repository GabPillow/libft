/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 16:12:22 by grochefo          #+#    #+#             */
/*   Updated: 2019/03/02 18:03:14 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_howmanynb(long long n, char *str, int base)
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

char			*ft_lltoa_base(long long n, char *base)
{
	char	*str;
	int		i;

	i = 0;
	if (n == (LLONG_MIN))
		return (ft_strdup("-9223372036854775808"));
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
