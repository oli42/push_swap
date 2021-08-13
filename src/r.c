/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:19:41 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/02 12:20:30 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*first;
	t_list	*last;

	first = *a;
	last = *a;
	if (a == NULL || (*a)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		last = last->next;
	}
	*a = first->next;
	first->next = NULL;
	last->next = first;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **b)
{
	t_list	*first;
	t_list	*last;

	first = *b;
	last = *b;
	if (b == NULL || (*b)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		last = last->next;
	}
	*b = first->next;
	first->next = NULL;
	last->next = first;
	ft_putstr_fd("rb\n", 1);
}

void	rra(t_list **a)
{
	t_list	*ptr;

	ptr = *a;
	if (!*a || !(*a)->next)
	{
		return ;
	}
	while (ptr->next->next)
	{
		ptr = ptr->next;
	}
	ptr->next->next = *a;
	*a = ptr->next;
	ptr->next = NULL;
	ft_putstr_fd("rra\n", 1);
}	

void	rrb(t_list **b)
{
	t_list	*ptr;

	if (!*b || !(*b)->next)
	{
		return ;
	}
	ptr = *b;
	while (ptr->next->next)
	{
		ptr = ptr->next;
	}
	ptr->next->next = *b;
	*b = ptr->next;
	ptr->next = NULL;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **a, t_list **b)
{
	if (a)
		rra(a);
	if (b)
		rrb(b);
	ft_putstr_fd("rrr\n", 1);
}
