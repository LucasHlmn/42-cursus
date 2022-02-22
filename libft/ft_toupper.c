/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:10:04 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/17 20:58:54 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts the letter c to upper case, if possible. */

#include "libft.h"

int
	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
