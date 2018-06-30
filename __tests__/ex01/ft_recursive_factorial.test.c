#include <stdio.h>
#include <stdlib.h>

int     ft_recursive_factorial(int n);

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
    assertIntegerEqual(0, ft_recursive_factorial(-1));
    printf("OK\n");

    printf("When argument is 0 then return should be 1\n");
    assertIntegerEqual(1, ft_recursive_factorial(0));
    printf("OK\n");

    printf("When argument is 1 then return should be 1\n");
    assertIntegerEqual(1, ft_recursive_factorial(1));
    printf("OK\n");

    printf("When argument is 2 then return should be 2\n");
    assertIntegerEqual(2, ft_recursive_factorial(2));
    printf("OK\n");

    printf("When argument is 3 then return should be 6\n");
    assertIntegerEqual(6, ft_recursive_factorial(3));
    printf("OK\n");

    printf("When argument is 11 then return should be 39916800\n");
    assertIntegerEqual(39916800, ft_recursive_factorial(11));
    printf("OK\n");
    
    return (0);
}
