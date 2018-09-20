/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:59:22 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/19 19:06:21 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char *ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*stock;
	int			i;
	int			j;

	i = 0;
	stock = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!stock)
		return (0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		stock[i].size_param = j;
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].tab = ft_split_whitepaces(av[i]);
		i++;	
	}
	stock[i].str = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	ft_param_to_tab(argc, argv);
	return (0);
}
