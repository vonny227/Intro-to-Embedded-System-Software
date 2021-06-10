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

void print_array( unsigned char *darray, unsigned int size);

unsigned char find_median( unsigned char *darray, unsigned int size );

unsigned char find_mean( unsigned char *darray, unsigned int size );

unsigned char find_maximum( unsigned char *darray, unsigned int size );

unsigned char find_minimum( unsigned char *darray, unsigned int size );

unsigned char* sort_array( unsigned char *darray, unsigned int size );

/**
 * @brief <Add Brief Description of Function Here>
 *      prints the statistics of an array
 *
 * <Add Extended Description Here>
 *      call min, max, median and mean functions and print the values
 *
 * @param <Add InputName> <add description here>
 *         input is a unsigned character array 
 *
 * @return does not return any value
 */


#endif /* __STATS_H__ */
