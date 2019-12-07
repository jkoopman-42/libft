/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uitohex.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoopman <jkoopman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/07 16:06:52 by jkoopman       #+#    #+#                */
/*   Updated: 2019/12/07 17:01:10 by jkoopman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

const static char	*g_hexset = "0123456789ABCDEF";

char				*ft_uitohex(unsigned int n)
{
	char		*str;
	size_t		i;

	i = ft_getnumlen(n, 16);
	str = (char*)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = g_hexset[(n % 16)];
		n /= 16;
		i--;
	}
	return (str);
}
