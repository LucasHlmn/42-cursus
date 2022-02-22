/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:08:44 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/17 21:16:22 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION
	strncmp() function is same as strcmp(), 
	except that strncmp() comparison is limited to the number of characters 
	specified during the function call. For example strncmp(str1, str2, 4) 
	would compare only the first 4 characters of strings str1 and str2 

RETURN VALUES
     The strcmp() and strncmp() functions return 
	an integer greater than, equal to, or less than 0, according as the string s1 
	is greater than, equal to, or less than the string s2. 
	The comparison is done using unsigned characters, 
	so that `\200' is greater than `\0'*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char )s1[i] - (unsigned char)s2[i]);
}
