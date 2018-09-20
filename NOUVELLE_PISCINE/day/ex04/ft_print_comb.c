/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:54:01 by arnduran          #+#    #+#             */
/*   Updated: 2018/08/30 13:26:24 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	j = 0;
	k = 0;
	i = 47;
	while (i <= '9')
	{
		j = ++i;
		while (j <= '9')
		{
			k = ++j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k++);
				if (i != 7)
					ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int main()
{
	ft_print_comb();
	return (0);
}
