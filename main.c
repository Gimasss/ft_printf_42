#include "ft_printf.h"

int	main()
{
	int stocazzo;
	stocazzo = 15;
	int *ptr;
	ptr = &stocazzo;
	
	ft_printf("Hello %s with a capital %c you're a %u / %i so don't act like a %d, you're even an hex %x or %X, stay at your %p\n",
				"bitch",
				'B',
				10,
				10,
				-500,
				10,
				10,
				ptr);
	ft_printf("NULL %s NULL", NULL);
}