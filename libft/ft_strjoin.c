/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:52:21 by grochefo          #+#    #+#             */
/*   Updated: 2018/11/23 17:58:44 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str_new;

	if (s1 && s2)
	{
		if (!(str_new = (char*)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		ft_strcpy(str_new, s1);
		ft_strcpy(&str_new[ft_strlen(str_new)], s2);
		str_new[ft_strlen(str_new)] = '\0';
		return (str_new);
	}
	return (NULL);
}
