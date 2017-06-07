/* 
 * File:   main.c
 * Author: lmoraes
 *
 * Created on June 2, 2017, 11:29 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "ordena.h"
#include <math.h>
#include <time.h>
/*
 * 
 */
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char** argv) {
    /*
    srand((unsigned)time(NULL));
    
    
    
    FILE* file = fopen("entrada21","w");
    
    int i;
    for (i = 0; i < pow(2,21); i++) {
        fprintf(file,"%d\n",rand());

    }

    fclose(file);
    */
    
    OrdeneExterno();
    
    
   return (EXIT_SUCCESS);
}

