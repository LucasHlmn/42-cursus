/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:08:17 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/05 16:22:46 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Valeur de retour 
La chaîne de caractères résultant des applications
successives de ’f’.
Retourne NULL si l’allocation échoue.

Description 
Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères passée en argument pour créer
une nouvelle chaîne de caractères (avec malloc(3))
résultant des applications successives de ’f’.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newchain;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	newchain = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!newchain)
		return (NULL);
	while (s[i])
	{
		newchain[i] = f(i, s[i]);
		i++;
	}
	newchain[i] = '\0';
	return (newchain);
}
