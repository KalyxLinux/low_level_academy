#include <stdio.h>

#define MAX_IDS 10

int main(void)
{
    int ids[MAX_IDS] = {0};
    int i;

    // for loop
    for (i = 0; i < MAX_IDS; i++)
    {
        ids[i] = i * i;
        printf("for -> %d: %d\n", i, ids[i]);
    }

    // while loop
    i = 0;
    while (i < MAX_IDS)
    {
        ids[i] = i * i;
        printf("while -> %d: %d\n", i, ids[i]);
        i++;
    }

    // do-while loop
    i = 0;
    do
    {
        ids[i] = i * i;
        printf("do-while -> %d: %d\n", i, ids[i]);
        i++;
    }
    while (i < MAX_IDS);

    return 0;
}