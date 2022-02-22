/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:07:24 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/05 16:21:56 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Function is used to duplicate a string.
	This function returns a pointer to a null-terminated byte string,
	which is a duplicate of the string pointed to by s. 
	The memory obtained is done dynamically using malloc 
	and hence it can be freed using free(). 
	It returns a pointer to the duplicated string s
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dst;

	i = 1;
	while (s1[i - 1])
		i++;
	dst = malloc(sizeof(*s1) * i);
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
