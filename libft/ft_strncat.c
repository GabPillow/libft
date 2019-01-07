/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:28:42 by grochefo          #+#    #+#             */
/*   Updated: 2018/11/22 18:31:51 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;

	if (ft_strlen(src) < n)
		n = ft_strlen(src);
	i = ft_strlen(dest);
	ft_strncpy(dest + i, src, n);
	dest[i + n] = '\0';
	return (dest);
}
