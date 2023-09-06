/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:17:46 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/18 20:03:22 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c )
{
	write(1, &c, 1);
}

void	printcomb2(int a, int b)
{
	putchar((a / 10) + 48);
	putchar((a % 10) + 48);
	putchar(' ');
	putchar((b / 10) + 48);
	putchar((b % 10) + 48);
	if (a != 98)
	{
		putchar(',');
		putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			printcomb2(a, b);
			++b;
		}
		++a;
	}
}
