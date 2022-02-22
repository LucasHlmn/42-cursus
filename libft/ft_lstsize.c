/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:27:40 by lhoulman          #+#    #+#             */
/*   Updated: 2022/02/07 17:29:32 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Valeur de retour Taille de la liste
Description Compte le nombre d’éléments de la liste.
*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	if (lst->next == NULL)
		count++;
	return (count);
}
