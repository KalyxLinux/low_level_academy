#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>  // for size_t

#define MAX_EMPLOYEES 1000

// Example: employee structure from video
struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

// Example: structure with packed attribute
struct __attribute__((packed)) mystruct_packed {
    int i;
    char c;
};

int main(void)
{
    // Array of employee structures
    struct employee_t employees[MAX_EMPLOYEES];

    printf("Size of employee_t: %zu bytes\n", sizeof(struct employee_t));
    printf("Size of packed struct: %zu bytes\n", sizeof(struct mystruct_packed));

    // Exercise: create employee with name and age
    struct Employee {
        char name[64];
        int age;
    };

    struct Employee emp = {"Steve", 42};
    printf("%s, aged %d years\n", emp.name, emp.age);

    return 0;
};