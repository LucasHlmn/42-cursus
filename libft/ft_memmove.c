/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:06:03 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/10 18:12:21 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies n bytes from memory area src to memory area dest, returns a pointer
 * to dest.
 DESCRIPTION
The C library function void *memmove(void *str1, const void *str2, size_t n)
copies n characters from str2 to str1,
but for overlapping memory blocks, memmove() is a safer approach than memcpy().

RETURN
This function returns a pointer to the destination, which is str1

EXAMPLE
char dest[] = "oldstring";
const char src[]  = "newstring"

Before memmove dest = oldstring, src = newstring
memmove(dest, src, 9)
After memmove dest = newstring, src = newstring

If the destination is above the source, we have to copy
back to front to avoid overwriting the data we want to
copy.

      dest:       dddddddd
      src:    ssssssss   ^
              |   ^  |___|
              |___|

 If the destination is below the source, we have to copy
 front to back.

      dest:   dddddddd
      src:    ^   ssssssss
              |___|  ^   |
                     |___|
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == src || n == 0)
		return (dst);
	while (src < dst && dst <= src + n)
	{
		ft_memcpy(dst + n - 1, src + n - 1, 1);
		n--;
	}
	ft_memcpy(dst, src, n);
	return (dst);
}
