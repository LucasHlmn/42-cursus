/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:07:28 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/17 21:08:59 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The strchr() function locates the first occurrence 
	of c (converted to a char)in the string pointed to by s.
	The terminating null character is considered to be part of the string;
	therefore if c is `\0', the functions locate the terminating `\0'
RETURN VALUES
     The functions strchr() and strrchr() 
	return a pointer to the located character,
	or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
			return ((char *) str);
		str++;
	}
	if ((char) c == '\0')
		return ((char *) str);
	return (NULL);
}
