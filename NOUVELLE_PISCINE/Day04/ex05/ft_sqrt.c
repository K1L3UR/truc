/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 19:45:29 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/09 17:59:45 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int sqrt;

	i = 1;
	sqrt = 1;
	if (nb == 0)
		return (0);
	while (i * i < nb)
		i++;
	if ((nb % i) == 0)
		return (i);
	else
		return (0);
}
