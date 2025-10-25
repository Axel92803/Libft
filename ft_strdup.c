/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:48:50 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 18:48:52 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int			x;
	char		*dup;

	x = 0;
	while (src[x])
		x++;
	dup = malloc(sizeof(char) * (x + 1));
	if (!dup)
		return (NULL);
	x = 0;
	while (src[x])
	{
		dup[x] = src[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}
