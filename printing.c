#include <unistd.h>

int ft_putchar(char c)
{
    write (1, &c, 1);
    return (1);
}

int ft_putstr(char *s)
{
    int counter;

    counter = 0;
    while (*s)
    {
        counter += write(1, s, 1);
        s++;
    }
    return (counter);
}

int ft_printnum(int n)
{
    long    nbr;
    int counter;
    char    c;

    nbr = n;
    counter = 0;
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
        counter++;
    }
    if (nbr >= 10)
        counter += ft_printnum(nbr / 10);
    c = nbr % 10 + '0';
    counter += write (1, &c, 1);
    return (counter);
}

int ft_print_unsigned_int(unsigned int n)
{
    char    c;
    int counter;

    counter = 0;
    if (n >= 10)
        counter += ft_print_unsigned_int(n / 10);
    c = n % 10 + '0';
    counter += write (1, &c, 1);
    return (counter);
}

int ft_print_lower_hexa(unsigned int n)
{
    char    c;
    int counter;
    char    *base;

    counter = 0;
    base = "0123456789abcdef";
    if (n >= 16)
        counter += ft_print_lower_hexa(n / 16);
    c = base[n % 16];
    counter += write (1, &c, 1);
    return (counter);
}

int ft_print_upper_hexa(unsigned int n)
{
    char    c;
    int counter;
    char    *base;

    counter = 0;
    base = "0123456789ABCDEF";
    if (n >= 16)
        counter += ft_print_upper_hexa(n / 16);
    c = base[n % 16];
    counter += write (1, &c, 1);
    return (counter);
}

int ft_print_ptr(void* ptr)
{
    
}