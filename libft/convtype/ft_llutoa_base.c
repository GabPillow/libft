/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 17:23:57 by grochefo          #+#    #+#             */
/*   Updated: 2019/03/03 19:48:25 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_llutoa_base(unsigned long long n, char *base)
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
