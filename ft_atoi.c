/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:37:01 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 18:37:10 by iontanvu         ###   ########.fr       */
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
