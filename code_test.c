#include <stdio.h>
struct Employee
{
    char name[64]; // string buffer to store the name of the employee
    int age; // single integer to store the age of the employee
};

int main(int argc, char **argv)
{
    struct Employee emp = {"steve", 42};
    printf("%s, aged %d years\n", emp.name, emp.age);
    return 0;
}