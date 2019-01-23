/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:42:48 by grochefo          #+#    #+#             */
/*   Updated: 2019/01/23 18:06:19 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *str)
{
	int		i;
	int		b;
	char	*str_copy;

	b = 0;
	i = ft_strlen(str) - 1;
	str_copy = ft_strnew(ft_strlen(str));
	while (str[b])
	{
		str_copy[i] = str[b];
		i--;
		b++;
	}
	str_copy[b] = '\0';
	return (str_copy);
}
