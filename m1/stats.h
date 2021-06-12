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
 * @file stats.h
 * @brief header file for stats.c
 *
 * <Add Extended Description Here>
 * Contains the function definitions for the stats.c file
 * computes the median mean max min
 * sorts and prints the data
 *  print_statistics()
 *  print_array()
 *  find_median()
 *  find_mean()
 *  find_maximum()
 *  find_minimum()
 *  sort_array()
 *
 *
 * @author Michael von Doellen
 * @date Jun 10, 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics( unsigned char *darray, unsigned int size );

/**
 * @brief <Add Brief Description of Function Here>
 *      prints the statistics of an array
 *
 * <Add Extended Description Here>
 *  Calls the functions find_median find_mean find_maximum find_minimum
 *  and prints the values that those functions return
 *
 * @param <Add InputName> <add description here>
 *         input is an unsigned character array and the size of the array
 *
 * @return
 *  Does not return a value
 */


/* Add Your Declarations and Function Comments here */ 
void print_array( unsigned char *darray, unsigned int size);

/**
 * @brief <Add Brief Description of Function Here>
 *  prints an array
 *
 * <Add Extended Description Here>
 *  prints out the values of an unsigned char array in decimal form it iterates
 *  through the array in a for loop printing each value
 *
 * @param <Add InputName> <add description here>
 *  input is an unsigned character array and the size of the array
 *
 * @return 
 *  does not return any value
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char find_median( unsigned char *darray, unsigned int size );

/**
 * @brief <Add Brief Description of Function Here>
 *  calculates the median on an array
 *
 * <Add Extended Description Here>
 *  sorts the array and the returns the value of the element size/2 of the array
 *  which is the median value or value
 *
 * @param <Add InputName> <add description here>
 *  input is an unsigned character array and the size of the array
 *
 * @return 
 *  function returns an unsigned char
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char find_mean( unsigned char *darray, unsigned int size );

/**
 * @brief <Add Brief Description of Function Here>
 *  calculate the mean or average of the array that is passed
 *
 * <Add Extended Description Here>
 *  iterates through the array and sums all the values when the loop ends it
 *  divides the sum by the number of elements in the array which is the size
 *  the function is passed the sum is an integer value to prevent overflow
 *
 * @param <Add InputName> <add description here>
 *  input is an unsigned character array and the size of the array
 *
 * @return 
 *  returns the mean which is an unsigned char
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char find_maximum( unsigned char *darray, unsigned int size );

/**
 * @brief <Add Brief Description of Function Here>
 *  returns the largest value in an unsigned char array
 *
 * <Add Extended Description Here>
 *  iterates through an array and keeps the largest value and returns that value
 *
 * @param <Add InputName> <add description here>
 *  input is an unsigned character array and the size of the array
 *
 * @return 
 *  returns the value of the largest element of an array as an unsigned char
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char find_minimum( unsigned char *darray, unsigned int size );

/**
 * @brief <Add Brief Description of Function Here>
 *  finds the smallest element of the array
 *
 * <Add Extended Description Here>
 *  iterates through an array and records the smallest value between the min and
 *  the current element
 *
 * @param <Add InputName> <add description here>
 *  input is an unsigned character array and the size of the array
 *
 * @return 
 *  returns an unsigned char that is the value of the smallest element of the
 *  array the it is passed
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char* sort_array( unsigned char *darray, unsigned int size );

/**
 * @brief <Add Brief Description of Function Here>
 *  sorts an unsigned char array of the size that it is passed
 *
 * <Add Extended Description Here>
 *  simple sorting by comparing neighboring elements in an array and moving the
 *  larger of the two elements to the start of the array it does this 1-size of
 *  the array times 
 *
 * @param <Add InputName> <add description here>
 *  input is an unsigned character array and the size of the array
 *
 * @return 
 *  returns an unsigned char array sorted from largest to smallest
 */

#endif /* __STATS_H__ */
