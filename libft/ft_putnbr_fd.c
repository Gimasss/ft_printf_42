/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:29:01 by gmastroc          #+#    #+#             */
/*   Updated: 2024/01/02 14:15:38 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	nl;

	nl = n;
	if (nl < 0)
	{
		ft_putchar_fd('-', fd);
		nl = -nl;
	}
	if (nl >= 10)
		ft_putnbr_fd(nl / 10, fd);
	ft_putchar_fd(((nl % 10) + '0'), fd);
}

// #include <fcntl.h>

// int main(void)
// {
// 	int fd = open("test.t", O_WRONLY);
// 	ft_putnbr_fd(80084, fd);
// 	close(fd);

// 	ft_putnbr_fd(0, 1);
// }
