/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 17:03:01 by grochefo          #+#    #+#             */
/*   Updated: 2019/02/19 17:06:45 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ultoa_base(unsigned long n, char *base)
{
	char	*str;
	int		i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (!(str = ft_strnew(32)))
		return (NULL);
	while (n > 0)
	{
		str[i++] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
