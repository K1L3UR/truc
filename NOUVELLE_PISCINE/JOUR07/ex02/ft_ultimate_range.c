/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:27:52 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/13 14:51:29 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	*tab;

	if (min <= max)
	{
		*range = NULL;
		//*range = (void *)0;
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * ( max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

int	main()
{
	int **range;
	int	i;
	
	i = 0;
	ft_ultimate_range(range, 5, 15);
	while ( i < 10)	
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
