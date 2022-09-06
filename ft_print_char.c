#include "ft_printf.h"

int ft_print_char(int c)
{
    write(1, &c, 1);
    return (0);
}

int main()
{
    ft_print_char(102);
}