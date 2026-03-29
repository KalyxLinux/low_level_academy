#include <stdio.h>
#include <stdbool.h>

#define MAX_IDS 32
#define MAX_EMPLOYEES 1000

// Basic structure example
struct mystruct {
    int i;
    char c;
};

// Employee structure from video example
struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

int main(void)
{
    // Example: array of basic structures
    struct mystruct mystructs[10];
    mystructs[0].i = 42;
    mystructs[0].c = 'A';

    printf("mystruct[0] -> i: %d, c: %c\n", mystructs[0].i, mystructs[0].c);

    // Array of employee structures
    struct employee_t employees[MAX_EMPLOYEES];

    // Initialize employee array
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        employees[i].income = 0.0f;
        employees[i].ismanager = false;
    }

    printf("employees[10].income = %f\n", employees[10].income); // prints 0.000000

    return 0;
}