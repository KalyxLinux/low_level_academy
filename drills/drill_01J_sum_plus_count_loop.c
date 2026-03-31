// Sum all numbers greatrer than 5
// Count how many numbers are greater than 5
// Print both values at the end

#include <stdio.h>

int main()
{
    int nums[5] = {2, 4, 6, 8, 10};
    int sum = 0;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] > 5)
        {
            sum += nums[i];
            count++;
        }
    }
    printf("Sum: %d\n", sum);
    printf("Count: %d\n", count);

    return 0;
};