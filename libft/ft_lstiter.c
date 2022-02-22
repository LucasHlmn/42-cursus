/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:38:15 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/22 13:05:28 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Valeur de retour Aucune
Fonctions externes autorisées
Aucune
Description Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst && f)
	{
		while (lst)
		{
			tmp = lst->next;
			f(lst->content);
			lst = tmp;
		}
	}
}
