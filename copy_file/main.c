/*************************************************************************
 **  This file decribe that how to copy file
 ** 
 **  Copyright(c) 2015 Lider Wang  
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    char ch, source[20], destination[20];
    FILE *src = NULL, *dst = NULL;
    
    printf("Enter name of file to copy\n");
    gets(source);

    src = fopen(source , "r");
    if (src == NULL)
        return EXIT_FAILURE;
    
    printf("Enter name of destination file \n");
    gets(destination);

    dst = fopen(destination, "w");
    if (dst == NULL)
        return EXIT_FAILURE;

    while ( (ch = fgetc(src)) != EOF)
        fputc(ch, dst);
    
    fclose(src);
    fclose(dst);
    

    return 0;
}

/*
#include <fstream>
#include <iostream>

using namespace std;
int main (void ){
    fstream in("input.bin",ios::binary|ios::in);
    fstream out("output.bin",ios::binary|ios::out);

    char c;
    while(true) {
        c=in.get();
        if(in.eof()) break;
        out.put(c);
    }
    in.close();
    out.close();
    return 0;
}
*/

