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
 * @brief This file contains function declarations.
 *
 * <Add Extended Description Here>
 *
 * @author Pranav Prabhu
 * @date 17 December 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/***********************************************************
 * @brief Prints the array. 
		Takes the array and size of array as input.
 *
 * 
 *
 * @param temp   An unsigned char pointer pointing a particular char in array.
 * @param size	 An unsigned int which contains the size of the array.
 * 
 * @return void data type
 *
 * 
 ***************************************************************/
void print_array(unsigned char *temp, int size);


/*****************************************************************

*@brief Prints maximum,minimum,median and mean of the given array.
*	Takes array and its size as input.
*
* @param temp  An unsigned char pointer pointing to a particular char in array.
* @param size  An unsigned int which contains the size of the array.
* @param maximum An int that stores maximum value of the array.
* @param minimum An int that stores the minimum value of the array.
* @param mean An int that stores mean value of array.
* @param median An int that stores the median of the array.
*
* @return void
*
*******************************************************************/

void print_statistics(unsigned char *temp,int size,unsigned char maximum,unsigned char minimum,unsigned char average,unsigned char median);


/*******************************************************************
*
*@brief Calculates the maximum value of the array.
*	Takes the array and its size as input.
*
* @param temp An unsigned char pointer pointing to a particular char in array.
* @param size An unsigned int which contains the size of the array.
*
* @return unsigned char
*
**********************************************************************/

unsigned char find_maximum(unsigned char *temp,int size);

/*********************************************************************
*
*@brief Calculates the minimum value of the array.
*	Takes the array and its size as input.
*
* @param temp An unsigned char pointer pointing to a particular char in array.
* @param size An unsigned int which contains the size of the array.
*
* @return unsigned char
*
*************************************************************************/


unsigned char find_minimum(unsigned char *temp,int size);

/************************************************************************
*
*@brief Calculates the mean of the array.
*	Takes the array and its size as input.
*
* @param temp An unsigned char pointer pointing to a particular char in array.
* @param size An unsigned int which contains the size of the array.
*
* @return unsigned char
*
*****************************************************************************/


unsigned char find_mean(unsigned char *temp,int size);

/*****************************************************************************
*
*@brief Calculates median of the array.
*	Takes the array and its size as input.
*
* @param temp An unsigned char pointer pointing to a particular char in array.
* @param size An unsigned int which contains the size of the array.
*
* @return unsigned char
*
********************************************************************************/


unsigned char find_median(unsigned char *temp,int size);

/******************************************************************************
*
*@brief Sorts the array in a non-increasing way.
*	Takes the array and its size as input.
*
* @param temp An unsigned char pointer pointing to a particular char in array.
* @param size An unsigned int which contains the size of the array.
*
* @return void
*
********************************************************************************/


void sort_array(unsigned char *temp,int size);


#endif /* __STATS_H__ */
