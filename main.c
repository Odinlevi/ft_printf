#include "libftprintf.h"
#include <stdio.h>
int main(void)
{
	ft_printf("%+04d\n", 42);
	printf("%+04d\n", 42);
	return(1);
}