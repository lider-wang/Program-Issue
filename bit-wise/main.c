/**************************************************************************
 **  This file decribe that the bitwise operation.
 **  
 **  @file      main.c
 **  @Id        Lider                            2015 Feb. 27
 **                                              Copyright(c) 2015
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define BIT_MASK    0x04
#define CLR_BIT(p,n)    ((p) &= ~((1) << (n)))
#define SET_BIT(p,n)    ((p) |= ((1) << (n))
#define TOGGLE_BIT(p,n) ((p) ^= ((1) << (n))
#define CHECK_BIT(p,n)  ((p) &  ((1) << (n))


static inline void clr_bit(long *x, int bitNum) {
    *x &= ~(1L << bitNum);    
}

static inline void set_bit(long *x, int bitNum) {
    *x |= (1L << bitNum);
}

static inline void toggle_bit(long *x, int bitNum) {
    *x ^= (1L << bitNum);    
}

int main(int argc, char** argv)
{
    int a = 15;
    

    return 0;
}




