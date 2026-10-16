/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:19:40 by rreziq            #+#    #+#             */
/*   Updated: 2026/10/16 15:43:58 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;
typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
}	t_stack;

t_node	*new_node(int value);
void	add_front(t_stack *s, t_node *node);
void	add_back(t_stack *s, t_node *node);
t_node	*get_last(t_stack *s);
int		stack_size(t_stack *s);
long	ft_atol(const char *nptr);
int		error_syntax(char *str);
int		error_overflow(long n);
int		error_repeat(t_stack *a, int n);

#endif
