#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

// Example struct for context
struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

// Union example
union myunion_u {
    int x;
    char c;
    short s;
};

int main(void)
{
    // Struct array example (from video)
    struct employee_t employees[MAX_EMPLOYEES];

    // Union example
    union myunion_u u;
    u.x = 0x41424344;  // Set int value

    printf("Accessing union members:\n");
    printf("u.x = 0x%x\n", u.x);    // full int
    printf("u.s = 0x%hx\n", u.s);   // short at lower memory location
    printf("u.c = 0x%hhx\n", u.c);  // char at lowest memory location

    return 0;
};