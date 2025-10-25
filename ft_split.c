/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:47:49 by iontanvu          #+#    #+#             */
/*   Updated: 2023/12/02 18:29:03 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	x;
	int	stop;

	x = 0;
	stop = 0;
	while (*str)
	{
		if (*str != c && stop == 0)
		{
			stop = 1;
			x++;
		}
		else if (*str == c)
			stop = 0;
		str++;
	}
	return (x);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		x;

	x = 0;
	word = malloc((finish + 1 - start) * sizeof(char));
	while (start < finish)
		word[x++] = str[start++];
	word[x] = '\0';
	return (word);
}

static char	**check(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	else
		return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	x;
	size_t	j;
	int		index;
	char	**split;

	split = check(s, c);
	if (!split)
		return (0);
	x = 0;
	j = 0;
	index = -1;
	while (x <= ft_strlen(s))
	{
		if (s[x] != c && index < 0)
			index = x;
		else if ((s[x] == c || x == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, x);
			index = -1;
		}
		x++;
	}
	split[j] = 0;
	return (split);
}
