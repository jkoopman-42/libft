/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoopman <jkoopman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/07 16:20:48 by jkoopman       #+#    #+#                */
/*   Updated: 2019/12/12 08:26:15 by prmerku       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int		ft_putnbr_base(unsigned long long num, size_t base, int sign, int uc)
{
	unsigned long long	nbr;
	char				c;

	if (base < 2 || base > 36)
		return (-1);
	if (num >> 63 & 1 && sign)
	{
		if (base == 10)
			write(1, "-", 1);
		else
			num &= ~1;
		nbr = (num * -1);
	}
	else
		nbr = num;
	if (nbr >= base)
		ft_putnbr_base(nbr / base, base, sign, uc);
	c = CHARSET_BASE[nbr % base];
	if (uc == 0)
		c |= 32;
	return (write(1, &c, 1));
}
