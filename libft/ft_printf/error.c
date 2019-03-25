/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 18:50:48 by grochefo          #+#    #+#             */
/*   Updated: 2019/03/22 16:14:13 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	verify_form(t_format *form)
{
	ft_exit(!(form->type == 'b' && form->prec <= 0));
	ft_exit(!(form->type == 'c' && form->flag & ZERO));
	ft_exit(form->type == 'd' || form->type == 's' || form->type == 'p'
	|| form->type == 'i' || form->type == 'c' || form->type == 'X' ||
	form->type == 'x' || form->type == 'u' || form->type == 'o' ||
	form->type == 'b' || form->type == 'f' || form->type == '%' ||
	form->type == 'D' || form->type == 'C' || form->type == 'F' ||
	form->type == 'O' || form->type == 'U');
}
