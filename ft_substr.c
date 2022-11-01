/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:46:27 by jorsanch          #+#    #+#             */
/*   Updated: 2022/11/01 18:56:04 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len > len_s - start)
		len = len_s - start;
	if (start < ft_strlen(s))
	{
		sub_str = (char *)malloc((len + 1) * sizeof(char));
		if (sub_str == NULL)
			return (NULL);
		ft_strlcpy(sub_str, s + start, len + 1);
	}
	else
	{
		sub_str = (char *)malloc(1 * sizeof(char));
		if (sub_str == NULL)
			return (NULL);
		sub_str[0] = '\0';
	}
	return (sub_str);
}
