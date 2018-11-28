/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaripap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:24:49 by dsaripap          #+#    #+#             */
/*   Updated: 2018/11/07 18:12:37 by dsaripap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *my_list;

	my_list = malloc(sizeof(t_list));
	if (my_list)
	{
		my_list->data = data;
		my_list->next = NULL;
	}
	return (my_list);
}
