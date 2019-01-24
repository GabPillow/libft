/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 17:23:57 by grochefo          #+#    #+#             */
/*   Updated: 2019/01/24 18:31:30 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_llutoa_base(unsigned long long n, char *base)
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
	str_copy = ft_strrev(str);
	ft_strdel(&str);
	return (str_copy);
}
