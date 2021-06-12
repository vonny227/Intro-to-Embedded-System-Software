/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  /* print array 
   * sort array
   * print stats
   *    print max
   *    print min
   *    print mean
   *    print median
   */
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  return 0;
}

/* Add other Implementation File Code Here */
void print_statistics ( unsigned char *darray, unsigned int size ) 
{
    /* Print the stats of the array mean, median, max and min */

    /* TODO: sort array the max min and median functions are not needed
       max is first element and min is last element */
    
    printf("Median is %u\n", find_median(darray, SIZE));
    printf("Mean is %u\n", find_mean(darray, SIZE));
    printf("Maximum is %u\n", find_maximum(darray, SIZE));
    printf("Minimum is %u\n", find_minimum(darray, SIZE));

}

void print_array( unsigned char *darray, unsigned int size )
{
    /* print the array as is */

    for (int i = 0; i < size; i++) {
        if (i % 5 == 0) printf("\n");
        printf("%3.u ", darray[i]);
    }
    printf("\n\n");

}

unsigned char find_median( unsigned char *darray, unsigned int size )
{
    /* return the median of the array */
     
    darray = sort_array(darray, size);
    print_array(darray, size);
    return darray[size/2];

}


unsigned char find_mean( unsigned char *darray, unsigned int size )
{
    /* return the mean of the array */
     
    unsigned int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += darray[i];
    }
    return sum / size;

}


unsigned char find_maximum( unsigned char *darray, unsigned int size )
{
    /* return the maximum of the array */
      
    unsigned char max = 0;
    for (int i = 0; i < size; i++) {
        max = (max > darray[i]) ? max : darray[i];
    }
    return max;

}


unsigned char find_minimum( unsigned char *darray, unsigned int size )
{
    /* return the minimum of the array */
     
    unsigned char min = darray[0];

    for (int i = 0; i < size; i++) {
        min = (min < darray[i]) ? min : darray[i];
    }
    return min;

}


unsigned char *sort_array( unsigned char *darray, unsigned int size )
{
    /*sort the array */
    
    /* TODO: faster sort algorithm */
    
    unsigned char tmp = 0;

    for (int i = 0; i < size-1; i++) {
       for (int j = 0; j < size; j++) {
           if (darray[j] < darray[j+1]) {
               tmp = darray[j];
               darray[j] = darray[j+1];
               darray[j+1] = tmp;
           }
       }
    }
    return darray;

}

