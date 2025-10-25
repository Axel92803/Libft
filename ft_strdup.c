/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:50:09 by itanvuia          #+#    #+#             */
/*   Updated: 2025/10/25 13:50:09 by itanvuia         ###   ########.fr       */
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
