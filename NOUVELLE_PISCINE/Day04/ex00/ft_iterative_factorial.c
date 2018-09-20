/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:55:56 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/09 17:51:55 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}
