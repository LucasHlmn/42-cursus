/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:09:39 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/21 20:43:24 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns the substring of the source string starting at the position start
 and ending at position len-1.
 EXAMPLE
 	string = "Progamming"
	start = 0
	len = 7
	--> return = "Program"
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newchain;
	size_t	i;

	if (!s)
		return (NULL);
	if (len <= 0 || (start + 1 > ft_strlen(s)))
	{
		newchain = (char *)malloc(1);
		*newchain = 0;
		return (newchain);
	}
	newchain = (char *)malloc (sizeof(char) * (len + 1));
	if (!newchain)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start] != '\0' && i < len)
			newchain[i++] = s[start++];
	}
	newchain[i] = '\0';
	return (newchain);
}
