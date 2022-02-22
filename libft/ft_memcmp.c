/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:05:52 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/17 21:41:01 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
The C library function int memcmp(const void *str1, const void *str2, size_t n)) 
compares the first n bytes of memory area str1 and memory area str2.

RETURN VALUES
The memcmp() function returns zero if the two strings are identical,
otherwise returns the difference between the first two differing bytes 
(treated as unsigned char values, so that `\200' is greater than `\0').
Zero-length strings are always identical.
This behavior is not required by C and portable code should only 
depend on the sign of the returned value.

EXAMPLE and comparison

	strcmp compares null-terminated C strings
	strncmp compares at most N characters of null-terminated C strings
	memcmp compares binary byte buffers of N bytes
	
	const char s1[] = "atoms\0\0\0\0";  // extra null bytes at end
	const char s2[] = "atoms\0abc";     // embedded null byte
	const char s3[] = "atomsaaa";

	strcmp(s1, s2) == 0      // strcmp stops at null terminator
	strcmp(s1, s3) != 0      // Strings are different
	strncmp(s1, s3, 5) == 0  // First 5 characters of strings are the same
	memcmp(s1, s3, 5) == 0   // First 5 bytes are the same
	strncmp(s1, s2, 8) == 0  // Strings are the same up through the null terminator
	memcmp(s1, s2, 8) != 0   // First 8 bytes are different*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
