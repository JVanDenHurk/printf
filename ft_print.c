#include "ft_printf.h"

int ft_printf(const char *string, ...)
{
    va_list arguments;
    int i;

    i = 0;
    va_start(arguments, string);
    while(string[i] != '\0')
    {
        if(string[i] == '%')
        {

        }
    }
}