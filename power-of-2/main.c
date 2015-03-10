/**************************************************************************
 **  This file show how to check num is power of 2 in one line.
 **  
 **  Copyright(c) 2015 Lider Wan
 *************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int isPowerOfTwo_Divide(unsigned int x)
{
    while ( ((x % 2) == 0) && (x > 1) )
        x /= 2;
    return (x == 1);
}

int isPowerOfTwo_CheckAll(unsigned int x)
{
    return 
    (
        x == 1 || x == 2 || x==4 || ... || x == 2147483648 
    );
}

int isPowerOfTwo_ChkNextPower(unsigned int x)
{
    unsigned int powerOfTwo = 1;

    while (powerOfTwo < x && powerOfTwo < 2147483648)
        powerOfTwo *= 2;

    return (x == powerOfTwo);
}

int isPowerOfTwo_DecrementAndCompare(unsigned int x)
{
    return ( (x != 0) && !(x & (x -1)));
}

int isPowerOfTwo_ComplementAndCompar(unsigned int x)
{
    return ( (x != 0) && ((x & (~x + 1) == x));
}

int main(int argc, char** argv)
{


    return 0;
}

