#include <stdio.h>
#include <stdlib.h>
#define glbArrSize 10 //array size

//the array set to static because its address will be used in setting and printing functions
static float glbArray[10]; 


void print_arrays(void) 
{
    int i;

    for (i=0; i < glbArrSize; i++)
    {
        printf("array[%d]=%f\n", i, *(glbArray+i));
    }
    return;
}

void set_arrays(void)
{
    int i;
    
    for (i=0; i < glbArrSize; i++)
    {
        // set the value inside the memory address at memblock + (i bytes) to i
        //*(memblock+i) = i;
        glbArray[i] = i;
    }
}

int main(void)
{
  //  float *mem;

    set_arrays();
    print_arrays();
    
   
    return 0;
}

