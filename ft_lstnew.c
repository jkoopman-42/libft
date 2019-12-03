/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoopman <jkoopman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 13:13:22 by jkoopman       #+#    #+#                */
/*   Updated: 2019/12/03 14:38:07 by jkoopman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void *content)
{
	t_list		*list;

	list = (t_list*)malloc(sizeof(*list));
	if (list == NULL)
		return (NULL);
	list->next = NULL;
	list->content = content;
	return (list);
}
