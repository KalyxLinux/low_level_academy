// Find the largest nunmber
// Print: Max: 12

#include <stdio.h>

int main()
{
    int nums[5] = {7, 3, 12, 5, 9};
    int max = nums[0];

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
        printf("Max: %d\n", max);
    
};