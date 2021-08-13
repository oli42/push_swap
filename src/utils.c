/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:59:35 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/12 11:00:53 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	utils(t_list *a, t_tools *d)
{
	t_list	*tmp;
	int		max;
	int		min;

	tmp = a;
	max = tmp->data;
	min = tmp->data;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		d->total_nbr += 1;
		if (tmp->data > max)
			max = tmp->data;
		if (tmp->data < min)
			min = tmp->data;
	}
	d->max = max;
	d->min = min;
	d->mid = d->total_nbr / 2;
}

t_list	*copy_list(t_list *a)
{
	t_list	*new;

	if (a == NULL)
		return (NULL);
	else
	{
		new = ft_lstnew(a->data);
		new->next = copy_list(a->next);
		return (new);
	}
}

int	display(t_list *new)
{
	if (!new->data)
	{
		printf("EMPTY PILE\n");
		return (0);
	}
	while (new->next != NULL)
	{
		printf("%d\n", new->data);
		new = new->next;
	}
	printf("%d\n", new->data);
	if (new->next != NULL)
		printf("%d\n", new->next->data);
	return (0);
}

int	ft_atoi(const char *ptr)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (ptr[i] == '-')
		sign *= -1;
	if (ptr[i] == '-' || ptr[i] == '+')
		i++;
	while (ptr[i] && ptr[i] >= '0' && ptr[i] <= '9')
	{
		result = result * 10 + (ptr[i] - '0');
		i++;
	}
	if ((ptr[i] && (ptr[i] < '0' || ptr[i] > '9'))
		|| (result * sign > 2147483647) || (result * sign < -2147483648 ))
	{
		ft_putstr_fd("Error\n", 1);
		exit(EXIT_FAILURE);
	}
	return (result * sign);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
}
