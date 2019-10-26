#include "ft_printf.h"

/*
**  variadic function has key words
**  va_start va_args va_end va_copy va_list
*/

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_printf(const char *fstr, ...)
{
    va_list args;
    va_start(args, fstr);

    while (*fstr)
    {
        if (*fstr == 'd')
        {
            int i = va_arg(args, int);
            printf("%d", i);
        }
        else
            printf("%c", *fstr);
        ++fstr;
    }
    va_end(args);
    return (0);
}

int     main(void)
{
    char *p;
    return (0);
}