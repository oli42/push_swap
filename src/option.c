/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:40:46 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/19 21:55:49 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*option(char **argv)
{
	int		i;
	char*	str;

	str = "";
	i = 1;
	while (argv[i])
	{
		str = ft_strjoin((const char *)str, (const char *)argv[i]);
		i++;
	}
	return (str);
}
