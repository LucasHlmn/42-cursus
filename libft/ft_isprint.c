/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:01:46 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/15 18:09:41 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for any printable character including space.
The isprint() function tests for any printing character, including space (` ').  
The value of the argument must be representable as 
an unsigned char or the value of EOF.*/

#include "libft.h"

int
	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
