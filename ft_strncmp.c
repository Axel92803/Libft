/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:50:10 by itanvuia          #+#    #+#             */
/*   Updated: 2025/10/25 13:50:10 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while ((*cast_s1 || *cast_s2) && n > 0)
	{
		if (*cast_s1 != *cast_s2)
			return (*cast_s1 - *cast_s2);
		cast_s1++;
		cast_s2++;
		n--;
	}
	return (0);
}
