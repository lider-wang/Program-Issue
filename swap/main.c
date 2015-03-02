/**************************************************************************
 **  This file decribe that the method of swap function work.
 **  
 **  @file      main.c
 **  @author    Lider
 **  Copyright(c) 2015                           2015 Feb. 27
 *************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef void (*swapHandler)(int *, int *);

/** swap without third variable */
void swap_without_tmp(int * a, int * b);

/** swap wwith XOR operation */
void swap_with_XOR(int * a, int * b);

/** swap with the normal tmp variable */
void swap(int * a, int * b);

swapHandler jump_table[3] = 
{
    swap,
    swap_with_XOR, 
    swap_without_tmp
};

int main(int argc, char** argv)
{
    int a = 4, b = 5;
    int usage = 2;
    
    printf("before swap : a = %d, b = %d", a, b);
    
    switch(usage)
    {
        case 0: jump_table[usage](&a, &b); break;
        case 1: jump_table[usage](&a, &b); break;
        case 2: jump_table[usage](&a, &b); break;
        default: break;
    }
        
    printf("after  swap : a = %d, b = %d", a, b);

    return 0;
}

//-------------------------------------------------------------------------
void swap_without_tmp(int * a, int * b)
{
    (*a) = (*a) + (*b);
    (*b) = (*a) - (*b);
    (*a) = (*a) - (*b);
}
//-------------------------------------------------------------------------
void swap_with_XOR(int * a, int * b)
{
    (*a) = (*a) ^ (*b);
    (*b) = (*a) ^ (*b);
    (*a) = (*a) ^ (*b);
}
//-------------------------------------------------------------------------
void swap(int * a, int * b)
{
    int tmp;

    tmp = *a;
    *a  = *b;
    *b  = tmp;
}
