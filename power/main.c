/**************************************************************************
 **  This file decribe that how to calculate the two to the power of n
 **  @file      main.c
 **  Copyright(c) 2015 Lider Wang.
 *************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef int (*powerHandler)(int , int);

int twoToPowerN(int base, int power)
{
    int ans = 1, i = 0;

    for (; i < power; i++)
    {
        ans *= base;
    }

    return ans;
}

int baseToPowerN(int base, int power)
{
    int ans = 1;
    int a = base, b = power;

    while (b > 0)
    {
        if ((b & 0x01) == 1)
            ans = ans * a;

        a *= a;
        b = b >> 1;
    }

    return ans;

}

powerHandler jump_table[2] = 
{
    twoToPowerN,
    baseToPowerN
};

int main(int argc, char** argv)
{
    int i = 4;
    printf("sum of %d to power of %d - %d\n",2,i,jump_table[0](2,i));
    printf("sum of %d to power of %d - %d\n",2,i,jump_table[1](2,i));
    return 0;
}

