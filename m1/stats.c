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
 * @file stats.c
 * @brief A program that provides statistical data of the given array.
 *
 *This is the implementation file.
 *
 * @author Pranav Prabhu
 * @date 17 December 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,		//Array used
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

/*Variables to store statistical data*/
  
  unsigned char maximum;
  unsigned char minimum;
  unsigned char mean;
  unsigned char median;

  printf("\n The array used is:\n");

  print_array(test,SIZE);		//Calling the function to print array

/*Calling functions that compute statistical data of the given array*/
  
  maximum=find_maximum(test,SIZE);
  minimum=find_minimum(test,SIZE);
  mean=find_mean(test,SIZE);
  median=find_median(test,SIZE);

  print_statistics(test,SIZE,maximum,minimum,mean,median);   //Calling the function to print stats of the array.

  sort_array(test,SIZE);               //Calling the function to sort the array

  printf("\nThe array after sorting is:\n");
  print_array(test,SIZE);	       //Calling the function to print the array
}


void print_array(unsigned char *temp,int size)
{ 
  int i;

  if(temp==NULL)
    {
	return;
    }

  for(i=0;i<size;i++)
     {
        printf("%u\t",(unsigned char)temp[i]);
     }

  printf("\n"); 
}


void print_statistics(unsigned char *temp,int size,unsigned char maximum,unsigned char minimum,unsigned char average,unsigned char median)
{
  printf("\nThe statistics of the array is:\n");
  printf("\nMaximum=%u\t",maximum);
  printf("\nMinimum=%u\t",minimum);
  printf("\nMean=%u\t",average);
  printf("\nMedian=%u\t",median); 
}


unsigned char find_maximum(unsigned char *temp,int size)
{
  int i;
  unsigned char max;

  max=temp[0];
  
  for(i=1;i<size;i++)
     {
        if(temp[i]>max)
	  {
            max=temp[i];
          }
       }
  return max; 
}


unsigned char find_minimum(unsigned char *temp,int size)
{
  int i;
  unsigned char min;

  min=temp[0];

  for(i=1;i<size;i++)
     {
        if(temp[i]<min)
          {
            min=temp[i];
          }
      }
  return min;
}

unsigned char find_mean(unsigned char *temp,int size)
{
  int i;
  int sum;
  sum=0;
 
  if(temp==NULL)
    {
      return 0;
    }

  for(i=0;i<size;i++)
     {
       sum=sum+temp[i];
     }

  return (sum/size);
}

unsigned char find_median(unsigned char *temp,int size)
{
  int i;
  unsigned char median;

  sort_array(temp,size);

  if(size%2==1)
    median=temp[(size-1)/2];

  else{
     median=(temp[(size-1)/2]+temp[(size+1)/2]);
      }

  return median;
}


void sort_array(unsigned char *temp,int size)
{
  int i,j,tempvar;

  for(i=0;i<size;i++)
     {
      tempvar=temp[i];

       for(j=i-1;j>=0 && tempvar>temp[j];j--)
          {
             temp[j+1]=temp[j];
          }
        temp[j+1]=tempvar;
      }
}






