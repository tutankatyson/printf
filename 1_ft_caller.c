/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_ft_caller.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:16:12 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/07 22:47:46 by jorsanch         ###   ########.fr       */
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

static char ft_findendchar(char *str)
{
	size_t i;

	i = 1;									//i = 0 o i = 1 depende de si el str empieza o no por %
	while (!ft_checkendchar(str[i]))		// el ++ a derecha o izq equivale al i 0 o 1
		i++;
	return (str[i]);
}

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
 * 				%	nnnn.mmm	s/c
 * 			
 * 				
*******************************************************************************/

static char *ft_callerstring(char *arg, int cut, int fill, int left)
{
	if (fill)
	{
		if (left && !cut)
			printf("\nOUTPUT SPLIT: %s",ft_fill_left(arg, ' ', fill, 0));
		if (!left && !cut)
			printf("\nOUTPUT SPLIT: %s",ft_fill_right(arg, ' ', fill, 0));
		if (left && cut)
			printf("\nOUTPUT SPLIT: %s",ft_fill_left(ft_strcut(arg, cut), ' ', fill, 0));
		if (!left && cut)
			printf("\nOUTPUT SPLIT: %s",ft_fill_right(ft_strcut(arg, cut), ' ', fill, 0));
	}
	else
	{
		if (cut)
			printf("\nOUTPUT SPLIT: %s",ft_strcut(arg, cut));
		else
			printf("\nOUTPUT SPLIT: %s",arg);
	}
		printf(":");
		return(arg);
}



static void ft_flagstring(char *insert)
{
	int		fill;
	int		cut;
	int		i;
	int 	left;
	char *ptr;

	fill = 0;
	cut = 0;
	i = 1;
	left = 0;
	ptr = ft_strchr(insert,'.');
	while (insert[i] == '-')
	{
		left = 1;
		i++;
	}	
													printf("\nInsert: %s",insert);
	if (i > 0)
		fill = ft_atoi(insert + i);					printf("\nfill: %i",fill);
	if (ptr)
		cut = ft_atoi(ptr +1);						printf("\ncut: %i",cut);				
	
	ptr = ft_callerstring("%",cut,fill,left);			//AQUI SE SUSTITUYE ARG MANUALMENRE

}




void ft_caller(char *insert)
{
	char tipo;
														printf("\nInsert: %s",insert);
	tipo = ft_findendchar(insert);						printf("\nTipo: %c",tipo);

	if (ft_islegal(insert, tipo))
	{
		printf("\nLEGAL");
		if (tipo == 'c' || tipo == 's' || tipo == '%')
			ft_flagstring(insert);
		


	}
	
	

}


int main() 
{
	ft_caller				("%-77c");
	printf  ("\nPRINTF  OUT : %-77%c:");

	printf  ("\nPRINTF  OUT : %-77%s:");



	return (0);
}