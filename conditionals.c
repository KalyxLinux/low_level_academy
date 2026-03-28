Conditional Statements:
If we want the code to go down a certain path based on the state of the program.
We have to create conditional statements. one type is a "if statement".

if Statement:
"only do this thing if the following condition is true".

Example:
int x = 0;
// get value from the user
if (x == 42) 
{
    printf("You said 42!/n");
}
// The above statement will run until the result is true then takes action.

else Statement:
The else clause says "do this other thing if the condition is false",

Example:
int x = 0;
// get value from the user
if (x == 42)
{
    printf("you said 42!\n");
}
else
{
    printf("You said something else!\n");
}

if-else Statment:
Another conditional logic that chains multiple if-statments together
that are mutual in their logic, by using an if-else tree.
The if-else tree will check each logical condition in order,
and execute the first one that is true, after that, it will stop checking the tree.

Example:
int x = 0;
// get value from the user
if (x == 42)
{
    printf("You said 42!\n");
}
else if (x == 24)
{
    printf("You said 24!\n");
}
else
{
    printf("You said something else!\n");
}

// Video Example
#include <stdio.h>

int main()
{
    int temp;
    printf("what temprature is it?");
    scanf("%d", &temp);

    if (temp >= 70)
    {
        printf("dang bruther, its hot\n");
    }
    else if (temp >= 30 && temp < 70)
    {
        printf("dang bruther, its mild\n");
    }
    else
    {
        printf("dang bruther, its cold\n");
    }
    
    return 0;
}
// returns one of the three conditions depending on answer