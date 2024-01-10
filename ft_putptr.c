/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:24:36 by gmastroc          #+#    #+#             */
/*   Updated: 2024/01/10 16:08:54 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t ptr, int index)
{
	int count;

	count = 0;
	if (!ptr && !index)
		count = count + ft_putstr_fd("(nil)", 1);
	else
	{
		count = count + ft_putstr_fd("0x", 1);
		count = count + ft_putnbr_base(ptr, BASE16);
	}
	return (count);
}