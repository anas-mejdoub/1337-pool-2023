/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:15:03 by amejdoub          #+#    #+#             */
/*   Updated: 2023/09/03 14:15:06 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	mystrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*mystrcopy(char *str)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(mystrlen(str));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = mystrlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = mystrcopy(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].size = 0;
	arr[i].copy = 0;
	return (arr);
}
