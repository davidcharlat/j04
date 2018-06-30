#include <stdio.h>
#include <stdlib.h>

int     ft_fibonacci(int n);

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
    printf("When argument is -1 then return should be -1\n");
    assertIntegerEqual(-1, ft_fibonacci(-1));
    printf("OK\n");

    printf("When argument is 0 then return should be 0\n");
    assertIntegerEqual(0, ft_fibonacci(0));
    printf("OK\n");

    printf("When argument is 1 then return should be 1\n");
    assertIntegerEqual(1, ft_fibonacci(1));
    printf("OK\n");

    printf("When argument is 2 then return should be 1\n");
    assertIntegerEqual(1, ft_fibonacci(2));
    printf("OK\n");

    printf("When argument is 3 then return should be 2\n");
    assertIntegerEqual(2, ft_fibonacci(3));
    printf("OK\n");

    printf("When argument is 27 then return should be 196418\n");
    assertIntegerEqual(196418, ft_fibonacci(27));
    printf("OK\n");
    
    return (0);
}
