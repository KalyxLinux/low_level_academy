#include <stdio.h>

// Global variable
int g_NumPersons = 0;

int main(void)
{
    // Local variable
    int personID = 0;
    personID += 1;

    // Sub-scope / block variable
    {
        int personID = 10; // this is different from outer personID
        personID += 5;
        printf("Inside block personID = %d\n", personID); // prints 15
    }

    printf("Outer personID = %d\n", personID);           // prints 1
    printf("Global g_NumPersons = %d\n", g_NumPersons);  // prints 0

    // Use global variable
    g_NumPersons += 2;
    printf("Global g_NumPersons after update = %d\n", g_NumPersons); // prints 2

    return 0;
}