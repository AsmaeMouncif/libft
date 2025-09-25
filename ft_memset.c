#include "libft.h"

void *ft_memset(void *ptr, int c, size_t len)
{
    size_t i = 0;
    unsigned char *a = ptr;
    unsigned char b = c;
    while (i < len)
    {
        a[i] = b;
        i++;
    }
    return ptr;
}

/*int main(void)
{
    char str[] = "hy my name is";
    char *y = ft_memset(str, '*', 3);
    printf("%s\n", y);
    return 0;
}*/