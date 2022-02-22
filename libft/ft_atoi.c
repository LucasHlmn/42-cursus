/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:55:58 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/05 15:20:47 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	LIBRARY: <stdlib.h>
	SYNOPSIS: convert ASCII string to integer
DESCRIPTION:
	The atoi() function converts the initial portion of the string pointed
	to by str to int representation.
EXAMPLE
	String value = 98993489, Int value = 98993489
	String value = tutorialspoint.com, Int value = 0
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	i;
	long	mult;
	long	number;

	i = 0;
	mult = 1;
	number = 0;
	if (nptr[0] == '\0')
		return (i);
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\f' || \
			nptr[i] == '\r' || nptr[i] == '\n' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - 48);
		i++;
	}
	number *= mult;
	return (number);
}
