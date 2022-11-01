/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percets.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:18:14 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/19 18:36:49 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"		//ft_strdup

static int ft_counter(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if(str[i] == '%')
		i++;
	while (str[i] != '\0')
	{
		if(str[i] == '%' && str[i - 1] == '%')
			count ++;
		i++;
	}
	return (count);
}

char * ft_percents(char *str)
{
	int count;
	int i;
	char *txt;

	count = ft_counter(str);
	if (count == 0)
		return(ft_strdup(str));
	else
	{
		txt = (char *)malloc((ft_strlen(str) - count + 1) * (sizeof(char)));
		i = 0;
		count = 0;
		while (str[i] != '\0')
		{
			if (!(str[i] == '%' && str[i + 1] == '%'))
				txt[i] = str[i - count];
			else 
			{
				count++;
			}
			i++;
		}
	}
	return(ft_strdup(txt));
}

#include <stdio.h>

int main()
{
	char *s;

	s = ft_percents("Hola qu%%e ase");

	printf("\ncuenta: %i",ft_counter(s));
	printf("\n%s",s);

}