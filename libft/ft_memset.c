/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:06:08 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/10 18:55:57 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function fills the first n bytes of the memory area pointed to
 * by s with the constant byte c.
 DESCRIPTION
     The C library function void *memset(void *str, int c, size_t n)
	copies the character c (an unsigned char) 
	to the first n characters of the string pointed to, by the argument str.

RETURN VALUES
     This function returns a pointer to the memory area str.
EXAMPLE
str = This is string.h library function
memset(str,'$',7);
$$$$$$$ string.h library function */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
