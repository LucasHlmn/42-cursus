/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:56:54 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/21 20:32:21 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION
	calloc” or “contiguous allocation” method in C 
	is used to dynamically allocate the specified number of blocks
	of memory of the specified type. 
	it is very much similar to malloc() but has two different points and these are:
	It initializes each block with a default value ‘0’.
	It has two parameters or arguments as compare to malloc().
malloc = a single block of memory
calloc = n block of memory
	
Return Value
This function returns a pointer to the allocated memory,
 or NULL if the request fails.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*mem;
	size_t	i;

	total = count * size;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
