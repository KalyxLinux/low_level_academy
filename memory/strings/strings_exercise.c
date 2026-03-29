#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "hehe";

    char otherstr[] = {0x68, 0x65, 0x68, 0x65, 0};

    if (!strcmp(str, otherstr))
    {
        printf("Yay!\n");
    }
    else
    {
        printf("Nay!\n");
    }

    return 0;
}