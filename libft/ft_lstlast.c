/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:30:24 by lhoulman          #+#    #+#             */
/*   Updated: 2022/01/22 00:09:12 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Valeur de retour Dernier élément de la liste

Description 
Renvoie le dernier élément de la liste.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
