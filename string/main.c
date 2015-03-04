/*************************************************************************
 **  This file decribe that how to copy file
 ** 
 **  Copyright(c) 2015 Lider Wang  
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string_copy(char* a)
{
    int size = strlen(a);
    printf("size : %d",size);
    char *tmp = (char *) malloc(sizeof(char) * (size + 1));
    strcpy(tmp,a);
   
    return tmp; 
}

int main(int argc, char** argv)
{
    char *a = "leader";
    char *b = NULL;
    
    b = string_copy(a);

    printf("a = %s, b = %s\n",a,b);

    return 0;
}

