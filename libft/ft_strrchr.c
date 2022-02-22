/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:09:14 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/07 17:22:25 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The strchr() function locates the first occurrence of
	c (converted to a char) in the string pointed to by s.
	The terminating null character is considered to be part
	of the string; therefore if c is `\0',
	the functions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), 
	except it locates the last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() 
	return a pointer to the located character, 
	or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)(s + ft_strlen(s));
	while (1)
	{
		if (*str == (char)c)
			return (str);
		if (str == s)
			return (NULL);
		str--;
	}
}
