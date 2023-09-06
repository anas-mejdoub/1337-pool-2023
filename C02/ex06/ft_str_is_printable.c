/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:31:32 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/19 14:53:06 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			a++;
		}
		i++;
	}
	if (a == i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}