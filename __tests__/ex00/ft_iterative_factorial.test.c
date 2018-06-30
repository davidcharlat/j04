#include <stdio.h>

int     ft_iterative_factorial(int n);

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
    printf("When argument is -1 then return should be 0");
    assertIntegerEqual(0, ft_iterative_factorial(-1));

    printf("When argument is 0 then return should be 0");
    assertIntegerEqual(0, ft_iterative_factorial(0));

    printf("When argument is 1 then return should be 1");
    assertIntegerEqual(1, ft_iterative_factorial(1));

    printf("When argument is 2 then return should be 2");
    assertIntegerEqual(2, ft_iterative_factorial(2));

    printf("When argument is 3 then return should be 6");
    assertIntegerEqual(6, ft_iterative_factorial(3));

    printf("When argument is 11 then return should be 39916800");
    assertIntegerEqual(39916800, ft_iterative_factorial(11));
}
