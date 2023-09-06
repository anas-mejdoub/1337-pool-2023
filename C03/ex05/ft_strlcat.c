/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:53:02 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/26 12:50:21 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	res = mystrlen(dest) + mystrlen(src);
	len = mystrlen(dest);
	j = 0;
	if (size == 0 || len >= size)
		return (mystrlen(src) + size);
	while (src[i] && len < size -1)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (res);
}
