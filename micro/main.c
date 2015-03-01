/**************************************************************************
 **  This file decribe that the macro operation.
 **  
 **  @file      main.c
 **  @Id        Lider                            2015 Feb. 27
 **                                              Copyright(c) 2015
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SQARE(a)    ((a) * (a))

bool IsPowerOfTwo(ulong x)
{
        return (x != 0) && ((x & (x - 1)) == 0);
}

int main(int argc, char** argv)
{
    

    return 0;
}