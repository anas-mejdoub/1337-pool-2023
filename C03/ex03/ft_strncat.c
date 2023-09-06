/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:06:49 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/21 16:52:16 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = 0;
	if (src[i] == '\0')
		return (dest);
	else
	{
		while (dest[len_dest])
		{
			len_dest++;
		}
		while (src[i] && nb != 0)
		{
			dest[len_dest] = src[i];
			i++;
			len_dest++;
			nb--;
		}
		dest[len_dest] = '\0';
		return (dest);
	}
}
