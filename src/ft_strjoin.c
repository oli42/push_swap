/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:44:40 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/19 21:42:24 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*join;
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join = (char *)malloc
		(sizeof(*join) * (ft_strlen(s1) + (ft_strlen(s2) + 1)));
	if (!(join))
		return (NULL);
	while (*s1 != '\0')
		join[i++] = *s1++;
	join[i++] = ' ';
	while (*s2 != '\0')
		join[i++] = *s2++;
	join[i++] = ' ';
	join[i] = '\0';
	return (join);
}
