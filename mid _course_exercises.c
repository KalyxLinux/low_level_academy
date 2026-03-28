BREAKPOINT:
Chose to stop before continuing to pointers lesson.
I wanted to internalize what i learned more by practicing.
These are not in the lesson, but figured it would be of help going forward.

Exercise 1 - Variables, Arrays, and %d / %s
Write a C program that:
-Declares an array int scores[5] and intializes it with 5 scoress of your choice.
-Declares a char name[20] and stores your name in it.
-Calculates the sum the scores.
-Prints out your name and the sum using printf with %s for the name and %d for the sum.
Example output:
Kalyx scored a total of 375 points.

#include <stdio.h>

{
    int scores[5] = {24, 42, 33, 23, 31};
    char name[64] = ("Kalyx");

    int sum = (int scores[0] + int scores[4]);
}


int main()
{
    printf("%s, %d", name has made sum baskets);

    return 0;
}
// Intial code, and syntax-lots of errors

// Exercise revised
#include <stdio.h>

int main()
{
    int scores[5] = {24, 42, 33, 23, 31};
    char name[64] = "Kalyx";

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += scores[i];
    }

    printf("%s has made %d baskets.\n", name, sum);

    return 0;
};
// returns Kalyx has made 153 baskets.

Drill Set 1 - Core Syntax

// Exercise 1A - Variable + printf
// Write a program that:
// Declares an int age = 25;
// Prints - I am 25 years old
// Uses %d

#include <stdio.h>

int main()
{
    int age = 25;
    printf("I am %d years old\n", age);

    return 0;
};
// Returns I am 25 years old

// Exercise 1B - String + %s
// Declare - char name[32] = "Kalyx";
// Print exactly - My name is Kalyx

#include <stdio.h>

int main()
{
    char name[32] = "Kalyx";
    printf("My name is %s\n", name);

    return 0;
};
// Returns My name is Kalyx

// Exercise 1C - Combine
// Declare both int age = 25; char name[32] = "Kalyx";
// Print exactly - Kalyx is 25 years old

#include <stdio.h>

int main()
{
    int age = 25;
    char name[32] = "Kalyx";

    printf("%s is %d years old\n", name, age);

    return 0;
}
// Returns Kalyx is 25 years old