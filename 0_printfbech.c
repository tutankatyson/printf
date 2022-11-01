/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_printfbech.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:25:54 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/10 18:45:20 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libprint.h"

void printbench()
{
	int i, in;
	char c;
	char s[] = "string";
	void *p;
	unsigned int u;

	i = 42;
	c = 'c';
	p = &s;
	u = 101;
	in = i * -1;

	printf("\n * TYPES \n");
	printf("\n * int i:      %i ", i);
	printf("\n * pointer:    %p ", p);
	printf("\n * int d:      %d ", i);
	printf("\n * unsigned:   %u ", u);
	printf("\n * char:       %c ", c);
	printf("\n * string:     %s ", s);


	printf("\n\n * FLAGS con int positivo (i) y negativo (in) \n");

	printf("\n * (+) i:------->|%i ",		i);
	printf("\n * (-) i:------->|%i \n",		in);
	printf("\n * (+) +i:------>|%+i ",		u);
	printf("\n * (-) +i:------>|%+i \n",	in);
	printf("\n * (+) -i:------>|%-i ",		i);
	printf("\n * (-) -i:------>|%-i \n",	in);
	printf("\n * (+) 0i:------>|%0i ",		i);
	printf("\n * (-) 0i:------>|%0i \n",	in);
	printf("\n * (+) -06i:----->|%06i :",	i);
	printf("\n * (-) -06i:----->|%06i \n",	in);
	printf("\n * (+) 6i:------>|%6i ",		i);
	printf("\n * (-) 6i:------>|%6i \n",	in);
	printf("\n * (+) _i:------>|% i ",		i);
	printf("\n * (-) _i:------>|% i \n",	in);


	printf("\n\n * PRUEBAS DE FORMATO \n");

	printf("\n * (+) 06i:----->|%6i:",		i);
	printf("\n * (-) 06i:----->|%6i:\n",	in);
	printf("\n * (+) 6i:------>|%+010i:",		i);
	printf("\n * (-) 6i:------>|%+010i:\n",	in);
	printf("\n * (+) _i:------>|% i:",		i);
	printf("\n * (-) _i:------>|% i:\n",	in);


	char *str;
	str = ft_fill_right("0011", '0', 2, -1);
	str = ft_fill_right("0011", '0', 2, 1);
	str = ft_fill_right("0011", '0', 2, 0);
	str = ft_fill_right("0011", '0', 5, -1);
	str = ft_fill_right("0011", '0', 5, 1);
	str = ft_fill_right("0011", '0', 5, 0);



	printf("\n\n123456789abcdef  ------->   1");
	printf("\n%s",ft_fill_right("423456789", '0', 15, 0));printf("EOL");
	printf("\n%s",ft_fill_right("423456789", '0', 15, -1));printf("EOL");
	printf("\n%s",ft_fill_right("423456789", '0', 15, 1));printf("EOL");

	printf("\n\n123456789abcdef  ------->   2");
	printf("\n%s",ft_fill_right("42" ,'0', 4, 0));printf("EOL");
	printf("\n%s",ft_fill_right("42" ,'0', 4, -1));printf("EOL");
	printf("\n%s",ft_fill_right("42" ,'0', 4, 1));printf("EOL");
	printf("\n%s",ft_fill_right("-42",'0', 4, 0));printf("EOL");
	printf("\n%s",ft_fill_right("-42",'0', 4, -1));printf("EOL");
	printf("\n%s",ft_fill_right("-42",'0', 4, 1));printf("EOL");


	printf("\n\n123456789abcdef  ------->   3");
	printf("\n%s",ft_fill_right("42", '0', 6, 0));printf("EOL");
	printf("\n%06i",42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("42", '0', 6, -1));printf("EOL");
	printf("\n% 06i",42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("42", '0', 6, 1));printf("EOL");
	printf("\n%+06i",42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("-42", '0', 6, 0));printf("EOL");
	printf("\n%06i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("-42", '0', 6, -1));printf("EOL");
	printf("\n% 06i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("-42", '0', 6, 1));printf("EOL");
	printf("\n%+06i",-42);printf("EOL*\n");

	printf("\n\n123456789abcdef  ------->   4");
	printf("\n%s",ft_fill_right("-42", '0', 6, 0));printf("EOL");
		printf("\n%06i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("-42", '0', 6, -1));printf("EOL");
		printf("\n% 06i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("-42", '0', 6, 1));printf("EOL");
		printf("\n%+06i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("-42",'0', 6, 0));printf("EOL");
		printf("\n%06i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("-42",'0', 6, -1));printf("EOL");
		printf("\n% 06i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_right("-42",'0', 6, 1));printf("EOL");
		printf("\n%+06i",-42);printf("EOL*\n");

	printf("\n\n123456789abcdef  ------->   5");
	printf("\n%s",ft_fill_right("11001100", '0', 4, 0));printf("EOL");
	printf("\n%s",ft_fill_right("11001100", '0', 4, -1));printf("EOL");
	printf("\n%s",ft_fill_right("11001100", '0', 4, 1));printf("EOL");





	printf("\n\n123456789abcdef  ------->   6");
	printf("\n%s",ft_fill_left("423456789", '0', 15, 0));printf("EOL");
	printf("\n%s",ft_fill_left("423456789", '0', 15, -1));printf("EOL");
	printf("\n%s",ft_fill_left("423456789", '0', 15, 1));printf("EOL");

	printf("\n\n123456789abcdef  ------->   7");
	printf("\n%s",ft_fill_left("42" ,'0', 4, 0));printf("EOL");
	printf("\n%s",ft_fill_left("42" ,'0', 4, -1));printf("EOL");
	printf("\n%s",ft_fill_left("42" ,'0', 4, 1));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 4, 0));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 4, -1));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 4, 1));printf("EOL");


	printf("\n\n123456789abcdef  ------->   8");
	printf("\n%s",ft_fill_left("42", ' ', 6, 0));printf("EOL");
	printf("\n%-6i",42);printf("EOL*\n");
	printf("\n%s",ft_fill_left("42", ' ', 6, -1));printf("EOL");
	printf("\n% -6i",42);printf("EOL*\n");
	printf("\n%s",ft_fill_left("42", ' ', 6, 1));printf("EOL");
	printf("\n%+-6i",42);printf("EOL*\n");
	printf("\n%s",ft_fill_left("-42", ' ', 6, 0));printf("EOL");
	printf("\n%-6i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_left("-42", ' ', 6, -1));printf("EOL");
	printf("\n% -6i",-42);printf("EOL*\n");
	printf("\n%s",ft_fill_left("-42", ' ', 6, 1));printf("EOL");
	printf("\n%+-6i",-42);printf("EOL*\n");

	printf("\n\n123456789abcdef  ------->   9");
	printf("\n%s",ft_fill_left("42" ,'0', 6, 0));				printf("EOL");
	printf("\n%s",ft_fill_left("42" ,'0', 6, -1));				printf("EOL");
	printf("\n%s",ft_fill_left("42" ,'0', 6, 1));				printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 6, 0));				printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 6, -1));				printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 6, 1));				printf("EOL");

	printf("\n\n123456789abcdef  ------->   10");
	printf("\n%s"    ,ft_fill_left("11001100", '0', 4, 0));		printf("EOL");
	printf("\n%+-6i" ,-42);										printf("EOL*\n");
	printf("\n%s"    ,ft_fill_left("11001100", '0', 4, -1));	printf("EOL");
	printf("\n%+-6i" ,-42);										printf("EOL*\n");
	printf("\n%s"    ,ft_fill_left("11001100", '0', 4, 1));		printf("EOL");
	printf("\n%+-6i" ,-42);										printf("EOL*\n");

	
	printf("\n%s",ft_fill_right("123456789", ' ', 6, 0));printf("EOL");
	printf("\n%6i",123456789);printf("EOL*\n");
  
	


printf("\n\n\n  -  =  *  P R U E B A S   D E   F O R M A T O   S T R I G S *  =  -\n\n");
	int n;
	char *s1 = "En un lugar de la mancha de cuyo nombre no quiero acordarme";
//	char *s2 = "la cosa \n      Est  á \t \v \t    C4bR0|n|@";



	n = printf("\nflag X   hace: %s		\t\t",s1);			printf("%i",n);
	n = printf("\nflag .   hace: %.s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag .5  hace: %.8s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag .55 hace: %.88s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag 5   hace: %8s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag 55  hace: %88s  	\t\t",s1);			printf("%i",n);


	n = printf("\nflag X   hace: %-s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag .   hace: %-.s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag .5  hace: %-.8s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag .55 hace: %-.88s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag 5   hace: %-8s	\t\t",s1);			printf("%i",n);
	n = printf("\nflag 55  hace: %-88s  \t\t",s1);			printf("%i",n);




	printf("\n\n\n  -  =  A l i n e a m i e n t o   a   i z q u i e r d a  =  -\n\n");


	printf("\n\nAlineamiento a izquierda y derecha  ------->   S1\n");

	n = printf("\nflag  80 hace: %80s:\t\t",s1);								printf("%i",n);
	n =	printf("\nMy fnction do: %s:\t\t",ft_fill_right(s1, ' ', 80, 0));		printf("%i\n",n);
	n = printf("\nflag -80 hace: %-80s:\t\t",s1);								printf("%i",n);
	n =	printf("\nMy fnction do: %s:\t\t",ft_fill_left(s1, ' ', 80, 0));		printf("%i\n",n);



	n = printf("\nflag   .20 hace: %.20s:\t\t",s1);													printf("%i",n);
	n =	printf("\nMy  fnction  do: %s:\t\t", ft_strcut(s1,20));										printf("%i\n",n);
	n = printf("\nflag 50.20 hace: %50.20s:\t\t",s1);												printf("%i",n);
	n =	printf("\nMy  fnction  do: %s:\t\t",ft_fill_right(ft_strcut(s1,20), ' ', 50, 0));			printf("%i\n",n);
	n = printf("\nflag -50.20 hace: %-50.20s:\t\t",s1);												printf("%i",n);
	n =	printf("\nMy  fnction   do: %s:\t\t",ft_fill_left(ft_strcut(s1,20), ' ', 50, 0));			printf("%i\n",n);






//	n = printf("\nflag .55 hace: %-s 	\t\t ",s1);			printf("%i",n);


}