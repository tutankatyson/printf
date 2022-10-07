/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_ft_uatoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:08:28 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/07 23:26:18 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_number(const char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_uatoi(const char *str)
{
	int	n;

	n = 0;
	str++;
	while (*str == '+' || *str == '-' || *str == ' ')
		str++;
	while (ft_is_number(*str))
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (n);
}