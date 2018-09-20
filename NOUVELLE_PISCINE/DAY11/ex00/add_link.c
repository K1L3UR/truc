/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 21:16:41 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/19 21:25:49 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list	*add_link(t_list *list, char *str)
{
	t_list = *tmp

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}
