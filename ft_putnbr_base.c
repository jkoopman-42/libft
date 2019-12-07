/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoopman <jkoopman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/07 16:20:48 by jkoopman       #+#    #+#                */
/*   Updated: 2019/12/07 17:28:34 by jkoopman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

const static char	*g_hexset = "0123456789ABCDEF";

int		ft_putnbr_base(unsigned long long num, size_t base, int sign, int uc)
{
	unsigned long long	nbr;
	char				c;

	if (num >> 63 & 1 && sign)
	{
		num &= ~1;
		if (base == 10)
			write(1, "-", 1);
		nbr = (num * -1);
	}
	else
		nbr = num;
	if (nbr >= base)
		ft_putnbr_base(nbr / base, base, sign, uc);
	c = g_hexset[nbr % base];
	if (uc == 0)
		c |= 32;
	write(1, &c, 1);
	return (ft_getnumlen(num, base));
}
