#include "ft_printf.h"

char    ft_print_string(char *string)
{
    int i;

    i = 0;
    while (string[i] != '\0')
    {
        write(1, &string[i], 1);
        i++;
    }

    return (string[i]);
}