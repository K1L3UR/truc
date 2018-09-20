/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 19:17:36 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/19 21:16:34 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	char *str;
	struct s_list *next;
}				t_list;

t_list *add_link(t_list *list, char *str);
void	print_list(t_list *list);

#endif
