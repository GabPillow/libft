/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:10:07 by grochefo          #+#    #+#             */
/*   Updated: 2019/03/04 17:18:41 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_howmanynbr(int n, int base)
{
	int	t;

	t = 0;
	n < 0 && base == 16 ? t += 5 : 0;
	while (n > 1 || n < -1)
	{
		n /= base;
		t++;
	}
	return (t);
}

static char		*ft_trad(char *str, int n, char *base)
{
	int i;
	int t;

	t = ft_howmanynbr(n, ft_strlen(base));
	i = 0;
	while (t--)
	{
		str[i] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
		i++;
	}
	return (str);
}

char			*ft_itoabase(int n, char *base)
{
	char	*str;

	str = ft_strnew(ft_howmanynbr(n, ft_strlen(base)));
	if (n == 0)
		str = ft_strdup("0");
	else if (n < 0)
	{
		str = ft_trad(str, n, base);
		if (ft_strlen(base) != 16)
		{
			if (!(str = ft_strjoinplus(str, "-", 1)))
				return (NULL);
		}
	}
	else
		str = ft_trad(str, n, base);
	str = ft_strrev(str);
	return (str);
}
