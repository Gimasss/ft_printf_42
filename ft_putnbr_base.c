/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:29:01 by gmastroc          #+#    #+#             */
/*   Updated: 2024/01/02 14:09:55 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ftprintf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	const size_t	baselen = ft_strlen(base);
	int 	len;

	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n != 0)
	{
		len ++;
		write(1, &base[n % baselen], 1);
		n = n / baselen;
	}
	return (len);
}

//HOWTFDOESTHISWORK
/*
The provided C code is a function named ft_putnbr_base().
This function is designed to print an unsigned long integer n in a specified base. The base is provided as a string base, where the length of the string represents the base number and each character in the string represents a digit in that base.
The function begins by calculating the length of the base string using the ft_strlen() function and storing it in the baselen constant. It also initializes a counter len to keep track of the number of digits printed.
The function then checks if the number n is zero. 
If it is, the function simply writes "0" to the standard output (file descriptor 1) using the write() function and returns 1 (since one character was written).
If n is not zero, the function enters a loop that continues as long as n is not zero. In each iteration of the loop, the function increments the len counter and writes the character corresponding to the current digit of n in the specified base to the standard output.
This is done by using the remainder of n divided by baselen as an index into the base string. The number n is then divided by baselen to remove the last digit.

Finally, after all digits of n have been printed (when n becomes zero and the loop ends), the function returns the total number of digits printed, which is stored in len.

One thing to note is that this function prints the digits of n in reverse order, from least significant to most significant. If you want the digits to be printed in the usual order, you would need to store them in a buffer first, then print the buffer in reverse order.
*/