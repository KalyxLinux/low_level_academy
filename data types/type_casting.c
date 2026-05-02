#include <stdio.h>

int main(int argc, char *argv[])
{
    // the same size
    unsigned int x = 4;
    int sx = (int)(x);

    // down casting 
    unsigned int bigx = 0xfffffefe;
    short kindabig = (short)bigx;

    // upcasting
    short short2 = -1; // 0xffff 1111
    int wasashort = (int)short2; // 0xfffffffff

    // crosscasting 
    float f = 3.14;
    int wasafloat = (int)f;

    (char *)
    (short *)

    short *mydata = (short *)argv[1];

}