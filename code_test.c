#include <stdio.h>

int main()
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
}