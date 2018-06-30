#include <stdio.h>
#include <stdlib.h>

int     ft_recursive_power(int n, int power);

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
    printf("When arguments are (-1, (power)-1) then return should be 0\n");
    assertIntegerEqual(0, ft_recursive_power(-1, -1));
    printf("OK\n");

    printf("When arguments are (0, (power)0) then return should be 1\n");
    assertIntegerEqual(1, ft_recursive_power(0, 0));
    printf("OK\n");

    printf("When arguments are (5, (power)0) then return should be 1\n");
    assertIntegerEqual(1, ft_recursive_power(5, 0));
    printf("OK\n");

    printf("When arguments are (0, (power)2) then return should be 0\n");
    assertIntegerEqual(0, ft_recursive_power(0, 2));
    printf("OK\n");

    printf("When arguments are (2, (power)3) then return should be 8\n");
    assertIntegerEqual(8, ft_recursive_power(2, 3));
    printf("OK\n");

    printf("When arguments are (3, (power)-2) then return should be 0\n");
    assertIntegerEqual(0, ft_recursive_power(3, -2));
    printf("OK\n");

    printf("When arguments are (-4, (power)3) then return should be -64\n");
    assertIntegerEqual(-64, ft_recursive_power(-4, 3));
    printf("OK\n");
    
    return (0);
}
