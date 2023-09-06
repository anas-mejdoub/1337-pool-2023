/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:15:25 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/21 20:58:34 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				lensrc;

	lensrc = 0;
	i = 0;
	while (src[lensrc])
	{
		lensrc++;
	}
	if (size == 0)
	{
		return (lensrc);
	}
	else
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (lensrc);
	}
}
