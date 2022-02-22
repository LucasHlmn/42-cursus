/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:01:21 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/15 18:07:52 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if c is function tests for an ASCII character,
 which is any character between 0 and decimal 127 inclusive. */

#include "libft.h"

int
	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
