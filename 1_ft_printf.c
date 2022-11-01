/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_ft_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:48:17 by jorsanch          #+#    #+#             */
/*   Updated: 2022/11/01 19:28:16 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tools.h"	
#include "libft.h"	


void printbuff(char *str, char *name)
{
	size_t i = 0;
	char c = '\n';
	char *c3 = "$\\n$";
	char c2 = '|';

	write(1,&c,1);
	while (name[i] != '\0')
	{
		write(1,&name[i],1);
		i++;
	}
	write(1,":",1);

	write(1,&c2,1);
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
		{
			write(1,c3,4);
		}
		else
			write(1,&str[i],1);
		write(1,&c2,1);
		i++;
	}
	write(1,"$\\0$|",5);
//	printf("prueba(%zu)",i);
}


#include <stdarg.h>


#include <stdio.h>

static int	ft_charnonrepitedcounter(char find, char *str)
{
	int	i;
	int	count;
	int	last;

	last = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == find && !last)
		{
			count++;
			last = 1;
		}
		else
			last = 0;
		i++;
	}
	if (count == 0)
		count--;
	return (count);
}

static int	ft_checkendchar(char c)
{
	if (c == 'i' || c == 'd' || c == 'u' || c == 'p' || c == 'c' || c == 's'
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

static int ft_findendchar(char **txt)
{
	int i = 1;
	while (!ft_checkendchar(*(*txt + i)))
	{
		i++;
	}
	return(i);
}

static int	arg_type(char *txt)
{
	int i = 1;
	while (!ft_checkendchar(txt[i]))
	{
		i++;														// cspdiuxX %
	}
	if (txt[i] == '%')												//1: %
		return (1);
	if (txt[i] == 's')												//2: s					
		return (2);
	if (txt[i] == 'c')												//3: c
		return (3);
	if (txt[i] == 'd')												//4: d
		return (4);
	if (txt[i] == 'i')												//5: i
		return (5);
	if (txt[i] == 'p')												//6: p
		return (6);
	if (txt[i] == 'u')												//7: u
		return (7);
	if (txt[i] == 'x')												//8: x
		return (8);
	if (txt[i] == 'X')												//9: X
		return (9);
	return 0;
}

static int	ft_go_writing(char **txt)
{
	size_t i;

	i = 0;
	while (**txt != '%' && **txt != '\0')	//Mientras no llegue al % va escribiendo caracter a caracter
	{
		write(1, *txt, 1);
		*txt = *txt + 1;
		i++;
	}
	return (i);									// ----> maybe index-1									
}

char *ft_get_str(char *arg, int fill, int precision, int alignment)
{
	arg = 0;
	fill = 0;
	precision = 0;
	alignment = 0;
	return("TOMA TU PUTA STR");
}

static int ft_magic_string(char **txt)
{
//	int		fill 		=	 0;
//	int		precision 	=	 0;
//	int		alignment 	=	 0;
//	char	*str 		=	 0;

//	fill = ft_fill(*txt);											//TODO
//	precision = ft_precision(*txt);									//TODO
//	alignment = ft_alignment(*txt);									//TODO

//	str = ft_get_str(arg, fill, precision, alignment);
	
											printf(GREEN"MS:%s"RESET,"str");
//	return (ft_strlen(str));
}










int	ft_printf(char *txt, ...)
{
	va_list			ap;
	int				argn;
	unsigned int	cont;

	cont = 0;
	argn = ft_charnonrepitedcounter('%', txt);
	va_start(ap, txt);
	while (argn > 0)
	{
		cont = cont + ft_go_writing(&txt);
		if (arg_type(txt) == 1 || arg_type(txt) == 2)
			cont = cont + ft_magic_string(&txt);
//		else
//			if (arg_type(txt) == 3 || arg_type(txt) == 4)
//				cont = cont + ft_magic_signed(va_arg(ap, int), txt);
//		else
//			if (arg_type(txt) > 4)
//				cont = cont + ft_magic_unsigned(va_arg(ap, unsigned int), txt);
		argn--;
	}
	va_end(ap);
	return (cont);
}



int main()
{


	char *str = "Y marchando una de eco extra pa mi ente";

	ft_printf("\nNos fuimos%% a la cueva el eco%s <-> %s <-2-> %s"," echo echo"," MAS ECHO MAS ECO",str);
	
	printf("\n\n\n\n\n\n\n\n");


	
	printf(":00:");


}