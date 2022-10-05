/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_printfbech.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:25:54 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/05 14:00:07 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void printbench(void)
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
	printf("\n * (+) 06i:----->|%06i ",		i);
	printf("\n * (-) 06i:----->|%06i \n",	in);
	printf("\n * (+) 6i:------>|%6i ",		i);
	printf("\n * (-) 6i:------>|%6i \n",	in);
	printf("\n * (+) _i:------>|% i ",		i);
	printf("\n * (-) _i:------>|% i \n",	in);


	printf("\n\n * PRUEBAS DE FORMATO \n");

	printf("\n * (+) 06i:----->|%06i ",		i);
	printf("\n * (-) 06i:----->|%06i \n",	in);
	printf("\n * (+) 6i:------>|%6i ",		i);
	printf("\n * (-) 6i:------>|%6i \n",	in);
	printf("\n * (+) _i:------>|% i ",		i);
	printf("\n * (-) _i:------>|% i \n",	in);



}