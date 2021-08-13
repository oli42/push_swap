/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:57:41 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/02 11:57:45 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (b == NULL)
		return ;
	tmp = ft_lstnew((*b)->data);
	tmp->next = *a;
	*a = tmp;
	if ((*b)->next != NULL)
	{
		tmp2 = (*b)->next;
		*b = tmp2;
	}
	else
		(*b)->data = (uintptr_t) NULL;
}

void	pb_(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (a == NULL)
		return ;
	tmp = ft_lstnew((*a)->data);
	tmp->next = *b;
	*b = tmp;
	tmp2 = (*a)->next;
	*a = tmp2;
}

void	ra_(t_list **a)
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
}

void	rb_(t_list **b)
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
}

void	rrb_(t_list **b)
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
}
