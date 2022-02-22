/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:05:57 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/10 18:11:26 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  
DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dst. 
If dst and src overlap, behavior is undefined.
Applications in which dst and src might overlap should use memmove(3) instead.

The C library function void *memcpy(void *dest, const void *src, size_t n) 
copies n characters from memory area src to memory area dest.

RETURN
This function returns a pointer to destination, which is str1.

EXAMPLE
char src[50] = "http://www.tutorialspoint.com";
char dest[50];
strcpy(dest,"Heloooo!!")
Before memcpy dest = Heloooo!!
memcpy(dest, src, strlen(src)+1)
After memcpy dest = http://www.tutorialspoint.com
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}
