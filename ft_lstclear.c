/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 15:01:52 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/18 15:17:00 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;
	t_list	*n;

	if (!lst || !*lst)
		return ;
	i = *lst;
	while (i != NULL)
	{
		n = i->next;
		ft_lstdelone(i, del);
		i = n;
	}
	*lst = NULL;
}
