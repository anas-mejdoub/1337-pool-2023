/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:30:06 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/26 22:30:09 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	a;

	i = nb;
	a = 0;
	if (nb <= 2)
		return (2);
	while (a == 0)
	{
		if (ft_is_prime(i))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
