#include "libftprintf.h"

/*int in_pascal (char chr, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (chr == str[i])
			return (1);
	}
	return (0);
}*/

char	*recognition_of_cons_cont(char const *str, char *list_of_cons)
{
	int		f;
	int		i;
	char	arr_of_cons[15] = "sSpdDioOuUxXcC";

	i = 0;
	f = 0;
	while (str[i])
	{
		if (str[i] == 37)
			while (arr_of_cons[j])
			{
				if (str[i + 1] == arr_of_cons[j])
				{
					list_of_cons[f] = arr_of_cons[j];
					f++;
				}
			}
		i++;
		j = 0;
	}
	list_of_cons[i] = '\0';
	return (list_of_cons);
}

char	*recognition_of_cons(char const *str)
{
	int		i;
	int		count_of_cons;
	char	arr_of_cons[15] = "sSpdDioOuUxXcC";
	char	flags_arr[5] = "hljz";
	char	*list_of_cons;

	i = 0;
	count_of_cons = 0;
	while (str[i])
	{
		if (str[i] == 37)
			if (in_pascal(str[i + 1], &arr_of_cons) || in_pascal(str[i + 1], &flags_arr))
				count_of_cons++;
			else if ((str[i + 1] == 104 && str[i + 2] == 104) || (str[i + 1] == 108 && str[i + 1] == 108))
				count_of_cons+=2;
		i++;
	}
	i = 0;
	list_of_cons = (char*)malloc((sizeof(char) * count_of_cons * 2) + 1);
	return (recognition_of_cons_cont(str, list_of_cons));
}