/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:13:12 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/19 21:30:33 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <string.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}		t_list;

typedef struct s_tools
{
	int	max;
	int	min;
	int	min_ultimate;
	int	pivot;
	int	mid;
	int	total_nbr;
	int	move_nbr;
	int	move2_nbr;
	int	action_nbr;
	int	diviseur;
	int	count;
	int	clic;
	int	target;
	int	i;
	int	copy;
}		t_tools;

t_list	*ft_lstnew(int data);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
int		display(t_list *new);
/*--------------------------------------------------*/
int		checking(t_list **a, t_tools *d, int j);
int		check_list(t_list *lst);
int		check_double(t_list *lst);
void	utils(t_list *a, t_tools *d);
void	ft_init(t_tools *d);
int		check_sort(t_list *a);
t_list	*copy_list(t_list *a);
int		init_stack(char **dst, t_tools *d);
int		option(char **argv, t_tools *d);
char	*op(char **argv);

/*--------------------------------------------------*/
void	sa(t_list **a);
void	sb(t_list **a);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a);
void	ra_(t_list **a);
void	rb(t_list **b);
void	rb_(t_list **b);
void	pb(t_list **a, t_list **b);
void	pb_(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pa_(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrb_(t_list **b);
void	rrr(t_list **a, t_list **b);
/*--------------------------------------------------*/
int		ft_atoi(const char *ptr);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);

/*--------------------------------------------------*/
int		sort_3(t_list **a, t_tools *d);
void	sort_5(t_list **a, t_list **b, t_tools *d);
void	sort_5_norm(t_list **a, t_list **b, int i);
int		sort_stack(t_list **a, t_list **b, t_tools *d);
void	spot_smallest(t_list **a, t_tools *d);
int		spot_chunck(t_list **a, t_tools *d);
int		spot_chunck_retour(t_list **a, t_tools *d);
void	top(t_list **a, t_list **b, t_tools *d);
int		top_chunck(t_list **a, t_list **b, t_tools *d);
int		top_chunck_retour(t_list **a, t_list **b, t_tools *d);
void	bottom(t_list **a, t_list **b, t_tools *d);
void	bottom_chunck(t_list **a, t_list **b, t_tools *d);
void	bottom_chunck_retour(t_list **a, t_list **b, t_tools *d);
int		makeup(t_list **a, t_tools *d);
int		retour_div(t_list **a, t_list **b, t_tools *d, int div);
int		aller_div(t_list **a, t_list **b, t_tools *d, int div);
int		div_5(t_tools *d);
int		div_3(t_tools *d);
int		div_2(t_tools *d);
int		sort_list(t_list **a, t_list **b, t_tools *d, int div);
int		sort_list_norm(t_list **a, t_list **b, t_tools *d, int div);
int		sort_list_retour(t_list **a, t_list **b, t_tools *d, int div);
int		sort_list_retour_norm(t_list **a, t_list **b, t_tools *d, int div);
#endif
