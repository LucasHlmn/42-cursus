/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:06:24 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/21 22:33:14 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Valeur de retour
Aucune

Description Écrit le caractère ’c’ sur le descripteur de
fichier donné 'fd'.
*/

#include "libft.h"

void
	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
