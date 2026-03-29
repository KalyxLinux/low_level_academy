#include <stdio.h>

// Practice 02 - arrays + loops

int main(void)
{
    int scores[5] = {24, 42, 33, 23, 31};

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += scores[i];
    }

    printf("Total score: %d\n", sum);

    return 0;
};

// Focus:
// arrays
// iteration
// accumulation pattern (sum +=)