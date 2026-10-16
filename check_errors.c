/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:35:19 by rreziq            #+#    #+#             */
/*   Updated: 2026/10/16 15:52:16 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	error_syntax(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	error_overflow(long n)
{
	if (n > INT_MAX || n < INT_MIN)
		return (1);
	return (0);
}

int	error_repeat(t_stack *a, int n)
{
	t_node	*ptr;
	
	ptr = a->head;
	while (ptr)
	{
		if (n == ptr->value)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}
void free_stack(t_stack *s)
{
	t_node	*ptr;
	t_node	*save;

	ptr = s->head;
	while (ptr)
	{
		
	}

}
