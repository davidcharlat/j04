#include <stdio.h>
#include <stdlib.h>

int     ft_is_prime(int n);

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
    assertIntegerEqual(0, ft_is_prime(-1));
    printf("OK\n");

    printf("When argument is 0 then return should be 0\n");
    assertIntegerEqual(0, ft_is_prime(0));
    printf("OK\n");

    printf("When argument is 1 then return should be 0\n");
    assertIntegerEqual(0, ft_is_prime(1));
    printf("OK\n");

    printf("When argument is 2 then return should be 1\n");
    assertIntegerEqual(1, ft_is_prime(2));
    printf("OK\n");

    printf("When argument is 3 then return should be 1\n");
    assertIntegerEqual(1, ft_is_prime(3));
    printf("OK\n");

    printf("When argument is 2333 then return should be 1\n");
    assertIntegerEqual(1, ft_is_prime(2333));
    printf("OK\n");

    printf("When argument is 11012 then return should be 0\n");
    assertIntegerEqual(0, ft_is_prime(11012));
    printf("OK\n");
    
    return (0);
}
