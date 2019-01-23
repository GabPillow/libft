/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:10:07 by grochefo          #+#    #+#             */
/*   Updated: 2019/01/23 18:11:58 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, char *base)
{
	char	*str;
	char	*str_copy;
	int		i;
	int		b;

	b = ft_strlen(base);
	i = 0;
	str = ft_strnew(32);
	while (n > 0)
	{
		str[i] = base[n % b];
		i++;
		n /= b;
	}
	str[i] = '\0';
	if (b == 2 || b == 8)
		str_copy = ft_strrev(str);
	else
		str_copy = strdup(str);
	ft_strdel(&str);
	return (str_copy);
}