/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:07:32 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/21 22:34:04 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Valeur de retour Aucune

Description 
Écrit la chaîne de caractères ’s’ sur le
descripteur de fichier donné fd
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ((void) NULL);
	while (*s)
		write(fd, s++, 1);
}
