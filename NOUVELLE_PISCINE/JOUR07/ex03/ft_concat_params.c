/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnduran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 20:35:45 by arnduran          #+#    #+#             */
/*   Updated: 2018/09/12 00:17:33 by arnduran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	count = 0;
	while (count < argc)
	{
		j = 0;
		while (argv[j])
		{
			count++;
			j++;
		}
	}
	str = (char*)malloc(sizeof(*str) * (count + 1));
	i = 0;
	while (i < argc - 1)
	{
		str = ft_strcat(str, argv[i + 1]);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	printf("%s" ,ft_concat_params(argc, argv));
}
