/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islegal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:54:36 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/07 19:05:45 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int ft_checkendchar(char c)
{
	if (c == 'i' ||c == 'd' || c == 'u' || c == 'p' ||c == 'c' || c == 's' ||
	c == 'x' ||c == 'X' ||c == '%')
		return (1);
	return (0);
}

static int ft_flag_legal_cs(char *s)
{
	size_t i;
	int point;

	i = 0;
	if (!(ft_isdigit(s[i]) || s[i] == '.' || s[i] == '-') || s[i] == '0')
		return (0);
	if(s[i] == '.')
		i++;
	point = i;
	while (s[i] == '-')
		i++;

	while (!ft_checkendchar(s[i]))
	{
		if (s[i] == '.')
			point++;
		if (ft_isdigit(s[i]) || s[i] == '.' || point > 1)
			return (0);
		i++;
	}
	return (1);
}


int ft_islegal(char *s, char c)
{
/********* *  *   *    R e g l a s   d e   t i p o    *   *  * ***************
 * 
 * 		Strings y chars:
 * 
 * 			Flags:
 * 
 * 				+: NO	undefined
 * 				 : NO	undefined
 * 				#: NO	undefined
 * 				0: NO	undefined
 * 				n: fill with n spaces at left
 * 				-: fill with n spaces at right
 * 				.: cut at leng after point
 * 
 * 			Formats:
 * 				%	nnnn.nnnn	s/c
 * 			
 * 				
*******************************************************************************/
	if (c == 's' || c == 'c')
		ft_flag_legal_cs(s);
	

	return (0);
}


int main()
{
	printf("%-50.c--Hola mundo\n",'X');
	printf("%20.5sHola mundo","Prefacio ");
}