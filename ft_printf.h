/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:06:18 by gmastroc          #+#    #+#             */
/*   Updated: 2024/01/03 19:07:59 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define BASE16 "0123456789abcdef"
# define BASE16UPPER "0123456789ABCDEF"
# define BASE10 "0123456789"

//gestione cspdiuxX%
int		ft_printf(const char *format, ...);
//c%
int		ft_putchar_fd(char c, int fd);
//s
int		ft_putstr_fd(char *s, int fd);
//p
//itsownfucntion
//di
int		ft_putnbr_fd(int n, int fd);
//uxX
int		ft_putnbr_base(unsigned long n, char *base);
#endif