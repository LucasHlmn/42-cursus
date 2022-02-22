/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:07:07 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/15 19:37:29 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies up to size - 1 characters from the NUL-terminated string src to dst, 
NUL-terminating the result.

DESCRIPTION
     strlcpy() and strlcat() take the full size of the destination buffer 
	and guarantee NUL-termination if there is room.  Note that room for
     the NUL should be included in dstsize.

     strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
	NUL-terminating the result if dstsize is not 0.

     If the src and dst strings overlap, the behavior is undefined.
RETURN
	the strlcpy() and strlcat() functions return the total length of 
	the string they tried to create.  For strlcpy() that
     means the length of src.
	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
	*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
