/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 20:13:35 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/09 18:32:24 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}
