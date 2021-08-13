/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:04:04 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/02 12:04:07 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
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
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **a, t_list **b)
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
	ft_putstr_fd("pb\n", 1);
}

void	sa(t_list **a)
{
	t_list	*tmp;

	if (a == NULL || (*a)->next == NULL)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = *a;
	*a = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **b)
{
	t_list	*tmp;

	if (b == NULL || (*b)->next == NULL)
		return ;
	tmp = (*b)->next;
	(*b)->next = tmp->next;
	tmp->next = *b;
	*b = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **a, t_list **b)
{
	if (a)
		sa(a);
	if (b)
		sb(b);
}
