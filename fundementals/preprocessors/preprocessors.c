#include <stdio.h>

// Preprocessor step: runs BEFORE compilation. Handles macros, includes, and conditional compilation.

// Example macro definition
#define PI 3.14

int main(void)
{
    printf("Value of PI: %f\n", PI); // prints 3.14

    return 0;
}