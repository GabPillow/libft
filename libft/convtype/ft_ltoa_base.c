/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:24:35 by grochefo          #+#    #+#             */
/*   Updated: 2019/01/28 16:54:51 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa_base(long n, char *base)
{
	char	*str;
	char	*str_copy;
	int		i;
	int		b;

	b = ft_strlen(base);
	i = 0;
	if (n == 0)
		return ("0");
	str = ft_strnew(32);
	while (n > 0)
	{
		str[i] = base[n % b];
		i++;
		n /= b;
	}
	str[i] = '\0';
	str_copy = ft_strrev(str);
	ft_strdel(&str);
	return (str_copy);
}
