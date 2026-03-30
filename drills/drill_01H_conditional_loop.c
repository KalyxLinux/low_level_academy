// Only add numbers greater than 5
// Print final sum

#include <stdio.h>

int main()
{
    int nums[5] = {2, 4, 6, 8, 10};
    int sum = 0;

    for (int i = 0; i < 5; i++)
        if (nums[i] > 5)
        {
            sum += nums[i];
        }

        printf("%d\n", sum);
};