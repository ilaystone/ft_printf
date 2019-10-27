#include "includes/ft_printf.h"
#include "libft/libft.h"

/*
**  variadic function has key words
**  va_start va_args va_end va_copy va_list
*/

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
    int i = 15;
    p = "has been made with lib";
    printf("%zu:%s", ft_strlen(p), p);
    return (0);
}
