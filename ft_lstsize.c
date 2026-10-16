/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:21:21 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/17 16:25:15 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;

	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
