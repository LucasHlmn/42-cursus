/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:07:12 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/09 17:28:05 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION
	Appends the NUL-terminated string src to  the end of dst. It will append at 
	most size - strlen(dst) - 1 bytes, NUL-terminating the result. 
RETURN
	strlcat() functions return the total length of the string they tried to create.
	that means the initial length of dst plus the length of src.
	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this
EXAMPLE
	Before :                || After :
dst   | src   | size    || dst      | return
------------------------||--------------------
dst\0 | src\0 | 0       || dst\0    | 3
dst\0 | src\0 | 1       || dst\0    | 4
dst\0 | src\0 | 2       || dst\0    | 5
dst\0 | src\0 | 3       || dst\0    | 6
dst\0 | src\0 | 4       || dst\0    | 6
dst\0 | src\0 | 5       || dsts\0   | 6
dst\0 | src\0 | 6       || dstsr\0  | 6
dst\0 | src\0 | 7       || dstsrc\0 | 6
dst\0 | src\0 | 8       || dstsrc\0 | 6*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen((char *)src));
	i = ft_strlen(dest);
	if (i >= size)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] != '\0' && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
