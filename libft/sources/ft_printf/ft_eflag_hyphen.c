/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eflag_hyphen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:35:19 by aweaver           #+#    #+#             */
/*   Updated: 2022/08/02 13:09:03 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	ft_eflag_hyphen(t_list_printf *list, char **output)
{
	while (list->flag_hyphen == 1 && list->width > 0)
	{
		*output = ft_strjoin_free(*output, " ");
		list->width--;
	}
}
