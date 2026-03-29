#include <stdio.h>

// Practice 01 - printf basics

int main(void)
{
    int age = 25;
    char name[32] = "Kalyx";

    printf("I am %d years old\n", age);
    printf("My name is %s\n", name);
    printf("%s is %d years old\n", name, age);

    return 0;
};

// Focus:
// %d, %s
// basic variable usuage