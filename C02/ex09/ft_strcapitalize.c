/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:05:12 by amejdoub          #+#    #+#             */
/*   Updated: 2023/08/21 21:03:54 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespace(char str)
{
	if (str < 48 || str > 57)
	{
		if (str < 'A' || str > 'Z')
		{
			if (str < 'a' || str > 'z')
			{
				return (1);
			}
		}
	}
	return (0);
}

int	*lower(char *str, int *a)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
	*a = 0;
	return (a);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	while (str[i])
	{
		if (a == 1 && whitespace(str[i]) == 0)
		{
			lower(&str[i], &a);
		}
		else if (whitespace(str[i]))
		{
			a = 1;
		}
		else if (a == 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
