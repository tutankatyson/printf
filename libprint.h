
#ifndef LIBPRINT_H
#define LIBPRINT_H

# include <stdio.h>
# include <unistd.h>
//# include "libft.h"

char * ft_pointtohex(void *ptr);
int ft_charcouter(char find, char *str);
char * ft_fill_left(char *input, char filling, size_t spaces, int plus);
char * ft_fill_right(char *input, char filling, size_t spaces, int plus);
char *ft_strcut(char *str, size_t l);




#endif
