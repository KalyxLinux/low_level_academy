#include <stdio.h>

// Practice 03 - combining concepts

int main(void)
{
    int scores[5] = {24, 42, 33, 23, 31};
    char name[64] = "Kalyx";

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += scores[i];
    }

    printf("%s has made %d baskets.\n", name, sum);

    return 0;
};

//Focus:
// combing strings + arrays + loops
// formatted output