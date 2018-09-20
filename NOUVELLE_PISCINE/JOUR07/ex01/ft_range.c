/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:10:34 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/17 21:50:23 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int length;
	int i;

	i = 0;
	length = max - min;
	if (min >= max)
		return (NULL);
	tab = (int*)(malloc(sizeof(int) * (length)));
	while (i < length)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int	main()
{
	ft_range(0, 2147483647);
	return (0);
}
