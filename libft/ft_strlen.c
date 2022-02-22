/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:00:41 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/15 18:11:28 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns the length of s.
DESCRIPTION
     The strlen() function computes the length of the string s.  
	The strnlen() function attempts to compute the length of s, but never scans
     beyond the first maxlen bytes of s.

RETURN VALUES
     The strlen() function returns the number of characters
	that precede the terminating NUL character. 
	The strnlen() function returns either
     the same result as strlen() or maxlen, whichever is smaller. */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
