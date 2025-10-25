/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:50:09 by itanvuia          #+#    #+#             */
/*   Updated: 2025/10/25 13:50:09 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			tot_s;
	void			*dst;

	if (nmemb * size > UINT_MAX)
		return (NULL);
	if ((nmemb > UINT_MAX && size) || (size > UINT_MAX && nmemb))
		return (NULL);
	tot_s = (nmemb * size);
	dst = malloc(tot_s);
	if (dst == NULL)
		return (NULL);
	else
		ft_bzero(dst, tot_s);
	return (dst);
}
