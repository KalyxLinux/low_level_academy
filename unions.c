Unions:
A union is one piece of memeory interpreted in different ways.

Example:
union myunion
{
    int i;
    cahr c;
};
// Creates a type called union myunion that we can use later on in the code.
// This structure has two members i and c, but both will contain data at the same lcoation.
// The union is only the size of the largest element, in this case int i, or 4 bytes,

//Practice Example:
union myunion
{
    int i;
    char c;
};

int main()
{
    union myunion u;
    u.i = 0x41424344;
    printf("%c"\n, u.c);
    ...
}
// Above, u.c will equal 0x44, which is the value in the location of i.

// Video Example:
#include <stdio.h>
#include<stdbool.h>

#define MAX_EMPLOYEES 1000


struct employee_t
{
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

union myunion_u
{
    int x;
    char c;
    short s;
};

int main()
{
    struct employee_t employees[MAX_EMPLOYEES];

    union myunion_u u;
    u.x = 0x41424344;

    printf("%hx %hhx\n", u.s, u.c);
}
// returns 4344.44 
// access to the internal short, and internal characters in the larger int x in union