#include "ft_printf.h"

int	main()
{
	//int result = printf("Sentence to know how many %s\n", "characters were written");
    
    //printf("%d characters were written", result);
	ft_printf("Hello %s with a capital %c you're a %u / %i so don't act like a %d, you're even an hex %x or %X, stay at your %p\n",
				"bitch",
				'B',
				10,
				10,
				-500,
				10,
				10);
}