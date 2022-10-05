/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:48:17 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/04 16:45:21 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>


int ft_charnonrepitedcounter(char find, char *str);

int ft_printf(char *txt,...)
{
	int argn;
	va_list ap;
	int i;
	char * argv;

	i = 0;
	argn = ft_charnonrepitedcounter('%', txt);

	if(argn > 0)
	{
		va_start(ap, txt);
		printf("\nCreado el objeto\n");
	
		while(i < argn)
		{
			argv = va_arg(ap, char *);
			printf("el entero %iº es: %s\n",i+1, argv);
			i++;
		}
		va_end(ap);
		printf("\nObjeto lista descrujido\n");
	}


printf("\nnumero de %%: %i", argn);
return 0;
}
