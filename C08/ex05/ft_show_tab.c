/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:28:28 by amejdoub          #+#    #+#             */
/*   Updated: 2023/09/03 18:28:32 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	if (n < 10)
	{
		ft_putchar(n + 48);
	}
	else
	{
		putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != '\0')
	{
		putstr(par[i].str);
		ft_putchar('\n');
		putnbr(par[i].size);
		ft_putchar('\n');
		putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
