/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:25:51 by rreziq            #+#    #+#             */
/*   Updated: 2026/10/14 13:38:26 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	add_back(t_stack *s, t_node *node)
{
	if (!s->head)
	{
		s->head = node;
		s->tail = node;
	}
	else
	{
		s->tail->next = node;
		node->prev = s->tail;
		s->tail = node;
	}
	s->size++;
}

void	add_front(t_stack *s, t_node *node)
{
	if (!s->head)
	{
		s->head = node;
		s->tail = node;
	}
	else
	{
		node->next = s->head;
		s->head->prev = node;
		s->head = node;
	}
	s->size++;
}

t_node	*get_last(t_stack *s)
{
	return (s->tail);
}

int	stack_size(t_stack *s)
{
	return (s->size);
}
