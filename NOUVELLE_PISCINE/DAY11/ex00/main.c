/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 21:13:31 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/19 21:23:58 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

int	main()
{
	t_list *list;

	*list = NULL;
	list = add_link(list, "toto\n");
	list = add_link(list, "tota\n");
	list = add_link(list, "totu\n");
	list = add_link(list, "toti\n");
	list = add_link(list, "totx\n");
	print_list(list);
	return (0);
}
