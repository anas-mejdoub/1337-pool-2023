/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:51:43 by amejdoub          #+#    #+#             */
/*   Updated: 2023/09/05 22:30:50 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	is_sep(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	wc;

	wc = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			i++;
		if (str[i])
			wc++;
		while (str[i] && !is_sep(str[i], sep))
			i++;
	}
	return (wc);
}

int	csl(char *str, char *sep)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i] && is_sep(str[i], sep))
		i++;
	while (str[i] && !is_sep(str[i], sep))
	{
		c++;
		i++;
	}
	return (c);
}

char	*copy_in_str(char *dest, int size, char *ori)
{
	int	i;

	i = 0;
	while (ori[i] && (size >= 1))
	{
		dest[i] = ori[i];
		size--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		wc;
	int		j;
	int		i;
	char	**strs;

	j = 0;
	i = 0;
	wc = count_words(str, charset);
	strs = (char **) malloc((wc + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strs[wc] = NULL;
	while (j < wc)
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			strs[j] = malloc((csl(&str[i], charset) + 1) * sizeof(char));
			copy_in_str(strs[j], csl(&str[i], charset), &str[i]);
			i = i + csl(&str[i], charset);
		}
		j++;
	}
	return (strs);
}
