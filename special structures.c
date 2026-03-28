Structures:
Structures are areas of memory that organize variables of multiple types into a logical unit.

Special Structure Modifiers:
structs look the same across all systems. However, when optimizing for space and alignment,
this isnt always the case. To fix this, we can use struct attributes to make the structures more predictable.

Problem Statement:
If wanted to serial this data and work on it between two different systems that might have different architectures,
there is a chance that the structures may change between these syetems. By adding special modifiers to the structures,
we can ensure that the structure doe not get modified in this way.

You can create a structure with the following syntax.
// Example:
struct mystruct 
{
    int i;
    char c;
};
// Above, the structure should be only 5 bytes. But, 
// there is high chance that the structure is actually
// 8 bytes, or even 16 bytes due to the alignment issues

// To fix this, we can add the packed attribute.
struct _attribute_((_packed_)) mystruct
{
    int i;
    char c;
};
// This will create the same struct, but ensure thar the compiler
// does not add in any special sauce in between the elements so
// we can ensure it's the same size on multiple systems.


// Video Example:
#include <stdio.h>
#include <stdbool.h>

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
    struct employee_t employee[MAX_EMPLOYEES];

    printf("Size of employee: %d\n", sizeof(struct employee_t))
}

// Structures Exercise
// In this exercise we will create an employee structure and add fields to it that we can access.

// Task
// Finish the employee struct. Create a character buffer to store the employees name and a variable for his age
// Create an employee named "Steve", 42 years old.
#include <stdio.h>
struct Employee {
    int name[64]; 
    int age[3];
};
int main(int argc, char **argv) {
    struct Employee emp = {"steve", 42, 0};
    printf("%s, aged %d years\n", emp.name, emp.age);
    return 0;
}