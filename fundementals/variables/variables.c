#include <stdio.h>

int main(void)
{
    // Declaring variables
    int personID = 0;        // initialize to 0
    int person2ID = 1;       // another variable

    // Using variables
    personID += 1;
    person2ID += 2;

    printf("personID = %d\n", personID);     // prints 1
    printf("person2ID = %d\n", person2ID);   // prints 3

    return 0;
}