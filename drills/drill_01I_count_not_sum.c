// Count how many numbers are greater than 5
// Print the count

#include <stdio.h>

int main()
{
    int nums[5] = {2, 4, 6, 8, 10};
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] > 5)
        {
            count++;
        }
    }

    printf("Count: %d", count);

    return 0;
};
