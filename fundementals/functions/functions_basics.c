#include <stdio.h>

// Example function
int add(int x, int y)
{
    int z = x + y;
    return z;
}

int main(void)
{
    int result = add(1, 2);
    printf("%d\n", result); // prints 3

    return 0;
}