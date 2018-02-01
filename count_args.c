#include "libftprintf.h"

int in_pascal (char chr, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (chr == str[i])
			return (1);
	}
	return (0);
}

int double_flag(char chr1, char chr2)
{
    if (chr1 == 'h' && chr2 == 'h')
        return (1);
    else if (chr1 == 'l' && chr2 == 'l')
        return (1);
    return (0);
}

int count_args(const char *str)
{
    char	arr_of_cons[15] = "sSpdDioOuUxXcC";
	char	flags_arr[5] = "hljz";
    int ctr;
    int i;

    ctr = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == 37)
        {
            if (in_pascal(str[i+1], arr_of_cons))
                ctr++;
            else if (in_pascal(str[i+1], flags_arr))
                {if (in_pascal(str[i+2], arr_of_cons))
                    ctr++;}
            else if (double_flag(str[i+1], str[i+2]))
                if (in_pascal(str[i+3], arr_of_cons))
                    ctr++;
        }
        i++;
    }
    return (ctr);
}