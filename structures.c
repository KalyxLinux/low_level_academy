Structures:
A structure is a block of memory that contains variables of different or same types
that represents a logical representation of memory.

Structure Syntax:
struct mystruct
{
    int i;
    char c;
};
// Creates a type called struct mystruct that we can us elater on in the code.
//this structure has two members i and c.

Many Structures:
If a structure is a type, can we create multiple structures together in an array?
An array of structures? Yes.
//Example:
struct mystruct
{
    int i;
    char c;
};

int main()
{
    struct mystruct mystructs[10];
    ...
}

//Video Example:
#include <stdio.h>
#include <stdbool.h>

#define MAX_IDS 32
#define MAX_EMPLOYEES 1000

struct employee_t
{
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

int main()
{
    struct employee_t employees[MAX_EMPLOYEES];

    int i = 0;
    for (i = 0; i < MAX_EMPLOYEES; i++)
    {
        employees[i].income = 0;
        employees[i].ismanager = false;
    }

    printf("%f\n", employees[10].income);

}
// returns 0.000000