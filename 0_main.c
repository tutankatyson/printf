
#include "libprint.h"
#include "libft.h"

int	main()
{
	void *ptr;
	char *txt;

	ptr = NULL;
	txt = ft_pointtohex(&ptr);

	printf("\nprintf says: %p		\npointtohex: %s",ptr, txt);
	return(0);
}


