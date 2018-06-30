#include <stdio.h>
#include <stdlib.h>

int     ft_sqrt(int n);

void    assertIntegerEqual(int expected, int received)
{
    if (expected != received)
    {
        fprintf(stderr, "INTEGER_NOT_EQUAL : expecting %d - received %d.\n", expected, received);
        exit(1);
    }
}

int     main()
{
    printf("When argument is -1 then return should be 0\n");
    assertIntegerEqual(0, ft_sqrt(-1));
    printf("OK\n");

    printf("When argument is 0 then return should be 0\n");
    assertIntegerEqual(0, ft_sqrt(0));
    printf("OK\n");

    printf("When argument is 1 then return should be 1\n");
    assertIntegerEqual(1, ft_sqrt(1));
    printf("OK\n");

    printf("When argument is 2 then return should be 0\n");
    assertIntegerEqual(0, ft_sqrt(2));
    printf("OK\n");

    printf("When argument is 111 then return should be 0\n");
    assertIntegerEqual(0, ft_sqrt(111));
    printf("OK\n");

    printf("When argument is 1024 then return should be 32\n");
    assertIntegerEqual(32, ft_sqrt(1024));
    printf("OK\n");
    
    return (0);
}
