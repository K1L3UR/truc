/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:07:31 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/19 17:15:47 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int	ft_len_words(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
	{
		count++;
		i++;
	}	
	return (count);
}

int	ft_nb_words(char *str)
{
	int		i;
	int		count;


	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'
				|| str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

int		aux(char *str, int *i, int *j, int *k, char **res)
{
	while (((str[*i] == '\t' || str[*i] == ' ' || str[*i] == '\n') && str[*i]))
		(*i)++;
	if (str[*i] != '\0')
	{
		*k = 0;
		if (!(res[*j] = (char*)malloc(sizeof(char) * ft_len_words(str, *i) + 1)))
			return (0);
		while (str[*i] >= 33 &&str[*i] <= 126)
			res[*j][(*k)++] = str[(*i)++];
		res[*j][*k] = '\0';
	}
	(*j)++;
	(*i)++;
	*k = 0;
	return (1);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**res;
	int		word;

	i = 0;
	j = 0;
	word = ft_nb_words(str);
	if (!(res = (char**)malloc(sizeof(char*) * word + 1)))
		return (0);
	while (j < word)
	{
		if(!aux(str, &i, &j, &k, res))
			return (0);
	}
	res[j] = 0;   
	ft_print_words_tables(res);
	return (res);
}
