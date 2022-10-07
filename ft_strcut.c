/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:54:26 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/07 13:12:18 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcut(char *str, size_t l)
{
	char *out;
	size_t i;

	if(ft_strlen(str) <= l)
		return(ft_strdup(str));

	out = (char *)malloc((l + 1) * sizeof(char));
	if (!out)
		return (NULL);
	
	i = 0;
	while (i < l)
	{
		out[i] = str[i];
		i++;
	}
	out[i] = '\0';
	return (out);
	
}