/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:29:01 by gmastroc          #+#    #+#             */
/*   Updated: 2024/01/10 18:27:20 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	int				res;
	const size_t	baselen = ft_strlen(base);

	res = 0;
	if (n >= baselen)
		res = res + ft_putnbr_base(n / baselen, base);
	res = res + ft_putchar_fd(base[n % baselen], 1);
	return (res);
}
