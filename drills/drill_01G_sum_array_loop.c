// Sum all elements of an array using a for loop

#include <stdio.h>

int main()
{
    int nums[5] = {2, 4, 6, 8, 10};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += nums[i];
    }
    printf("%d\n", sum);

    return 0;
};