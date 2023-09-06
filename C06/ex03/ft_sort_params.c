/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:09:11 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/23 21:32:23 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] > str2[i] || str1[i] < str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ftprint(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		k;
	char	*str;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			k = i + 1;
			while (k < argc)
			{
				if (ft_strcmp(argv[i], argv[k]) > 0)
				{
					str = argv[i];
					argv[i] = argv[k];
					argv[k] = str;
				}
				k++;
			}
			i++;
		}
		ftprint(argc, argv);
	}
	return (0);
}
