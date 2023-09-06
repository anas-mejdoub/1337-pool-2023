/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:18:57 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/29 15:18:59 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	mystrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	separ(char *concatenated, int len, char *sep)
{
	int	k;

	k = 0;
	while (sep[k])
	{
		concatenated[len] = sep[k];
		len++;
		k++;
	}
}

char	*concat(char **strs, int size, char *concatenated, char *sep)
{
	int	i;
	int	j;
	int	len;
	int	k;

	len = 0;
	i = 0;
	k = mystrlen(sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			concatenated[len] = strs[i][j];
			len++;
			j++;
		}
		if (i != size - 1)
		{
			separ(concatenated, len, sep);
			len += k;
		}
		i++;
	}
	return (concatenated);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concatenated;
	int		i;
	int		len;
	int		k;
	int		j;

	len = 0;
	i = 0;
	k = mystrlen(sep);
	while (i < size)
	{
		len += mystrlen(strs[i]);
		i++;
	}
	concatenated = (char *)malloc(len + (k * (size) - 1));
	i = 0;
	j = 0;
	len = 0;
	k = 0;
	return (concat(strs, size, concatenated, sep));
}
int main() {
    // Write C code here
    
    char *x[] ={"test1","test2","test3"};
    printf("%s",ft_strjoin(3,x," "));

    return 0;
}