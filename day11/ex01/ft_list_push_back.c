/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaripap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:33:48 by dsaripap          #+#    #+#             */
/*   Updated: 2018/11/07 22:50:41 by dsaripap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp_list;
	t_list *new_elem;

	temp_list = *begin_list;
	new_elem = ft_create_elem(&data);
	while (temp_list != NULL)
		temp_list = temp_list->next;
	temp_list = new_elem;
}
