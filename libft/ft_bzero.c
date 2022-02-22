/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:56:17 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/10 18:56:03 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Erases the data in the n bytes of the memory starting at the location 
 *pointed to by s, by writing zeros (bytes containing '\0') to that area.
Basically same as memeset but replace with zero.
 DESCRIPTION
The bzero() function shall place n zero-valued bytes in the area pointed to by s.

RETURN VALUE
The bzero() function shall not return a value.

ERRORS
No errors are defined.
EXAMPLE
str = "This is string.h library function"
bzero(str,7);
"\0\0\0\0\0\0\0 string.h library function"*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
