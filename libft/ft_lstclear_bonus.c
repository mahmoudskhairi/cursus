/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:27:31 by mskhairi          #+#    #+#             */
/*   Updated: 2023/12/25 15:48:02 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	current = *lst;
	if (lst && del)
	{
		while (current)
		{
			tmp = current;
			current = current->next;
			ft_lstdelone(tmp, del);
		}
		*lst = NULL;
	}
}
