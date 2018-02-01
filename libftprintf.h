#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
char	*recognition_of_cons(char const *str);
int in_pascal(char chr, char *str);
int count_args(const char *str);
#endif