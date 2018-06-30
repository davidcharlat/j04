#include <stdio.h>
#include <stdlib.h>

int     ft_find_next_prime(int n);

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
    printf("When argument is -4 then return should be 2\n");
    assertIntegerEqual(2, ft_find_next_prime(-4));
    printf("OK\n");

    printf("When argument is 0 then return should be 2\n");
    assertIntegerEqual(2, ft_find_next_prime(0));
    printf("OK\n");

    printf("When argument is 1 then return should be 2\n");
    assertIntegerEqual(2, ft_find_next_prime(1));
    printf("OK\n");

    printf("When argument is 2 then return should be 3\n");
    assertIntegerEqual(3, ft_find_next_prime(2));
    printf("OK\n");

    printf("When argument is 3 then return should be 5\n");
    assertIntegerEqual(5, ft_find_next_prime(3));
    printf("OK\n");

    printf("When argument is 2333 then return should be 2339\n");
    assertIntegerEqual(2339, ft_find_next_prime(2333));
    printf("OK\n");

    printf("When argument is 11012 then return should be 11027\n");
    assertIntegerEqual(11027, ft_find_next_prime(11012));
    printf("OK\n");
    
    return (0);
}
