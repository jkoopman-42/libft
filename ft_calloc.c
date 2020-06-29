/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoopman <jkoopman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:31:26 by jkoopman      #+#    #+#                 */
/*   Updated: 2020/06/29 11:56:12 by jkoopman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, '\0', count * size);
	return (ptr);
}
