/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:26:16 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/12 11:49:09 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc((sizeof(t_list) * 1));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*Explic.
t_list	*new_node; --> creo un nuevo nodo de estructura "lista" 
(puntero) al que llamo new_node*/

/* TIP

t_list	*new_node;
	new->cont

-------------------

t_list	new_node;
	new.cont

 */
