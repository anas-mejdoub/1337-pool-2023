/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:18:45 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/18 20:06:16 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483647)
	{
		putchar('-');
		putchar('2');
		ft_putnbr(147483647);
	}
	else if (nb < 0)
	{
		putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		putchar(nb +48);
	}
	else
	{
		ft_putnbr((nb / 10));
		putchar((nb % 10) + 48);
	}
}
