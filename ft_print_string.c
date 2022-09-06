#include "ft_printf.h"
#include "Libft/libft.h"

char    ft_print_string(char *string)
{
       if(!string)
       {
            ft_putstr_fd("(null)", 1);
            return (6);
       }
       ft_putstr_fd(string, 1);
       return (ft_strlen(string));
}

int main()
{
    ft_print_string("test");
}