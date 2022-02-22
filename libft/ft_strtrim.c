/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:09:32 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/21 20:51:38 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Prototype: char *ft_strtrim(char const *s1, char const *set);

Valeur de retour 
	La chaîne de caractères trimmée.
	NULL si l’allocation échoue.

Description: 
	Alloue (avec malloc(3)) et retourne une copie de
	la chaîne ’s1’, sans les caractères spécifiés
	dans ’set’ au début et à la fin de la chaîne de
	caractères.
 */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newchain;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
	{
		end--;
	}
	newchain = ft_substr ((char *)s1, 0, end + 1);
	return (newchain);
}
