/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:50:09 by itanvuia          #+#    #+#             */
/*   Updated: 2025/10/25 13:50:09 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			sign;
	int			sign_count;
	long int	res;

	sign = 1;
	sign_count = 0;
	res = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		sign_count++;
		if (*nptr == '-' && sign_count == 1)
			sign = -1;
		else if (*nptr == '+' && sign_count == 1)
			sign = 1;
		else
			sign = 0;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
		res = (res * 10) + (*nptr++ - '0');
	return (res * sign);
}
