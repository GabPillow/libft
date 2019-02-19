/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 15:58:09 by grochefo          #+#    #+#             */
/*   Updated: 2019/02/19 16:41:46 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		rearrondi(char *str, size_t end)
{
	while (end && (str[end] == '9' || str[end] == '.'))
	{
		str[end] == '9' ? str[end] = '0' : 0;
		end--;
	}
	if (!end && str[end] == '9')
	{
		str[end] = '0';
		return (1);
	}
	str[end] = str[end] + 1;
	return (0);
}

static char		*arrondi(char *str, size_t prec, size_t end)
{
	char	*str_new;

	prec += ft_strlenn(str, '.') + 1;
	str[prec - 1] == '.' ? prec -= 1 : 0;
	while (end-- >= prec)
	{
		if (str[end] >= '5')
		{
			str[end - 1] == '.' ? end-- : 0;
			if (str[end - 1] == '9')
			{
				if (rearrondi(str, end - 1))
				{
					prec += 1;
					str = ft_strjoinplus("1", str, 2);
				}
			}
			else
				str[end - 1] = str[end - 1] + 1;
		}
	}
	str_new = ft_strndup(str, prec);
	ft_strdel(&str);
	return (str_new);
}

char			*ft_ftoa(double n, size_t prec)
{
	char	*str_new;
	size_t	start;
	int		s;

	s = 1;
	n < 0 ? s = -1 : 0;
	str_new = ft_ltoa((long)n * s);
	start = ft_strlen(str_new) + 1;
	if (!(str_new = ft_strjoinplus(str_new, ".", 1)))
		return (NULL);
	n = (n * s) - ((long)n * s);
	while (n)
	{
		n *= 10;
		if (!(str_new = ft_strjoinplus(str_new, ft_ltoa((long)n), 3)))
			return (NULL);
		n -= (long)n;
	}
	if ((ft_strlen(str_new) - start) > prec)
		str_new = arrondi(str_new, prec, ft_strlen(str_new));
	s == -1 ? str_new = ft_strjoinplus("-", str_new, 2) : 0;
	return (str_new);
}
