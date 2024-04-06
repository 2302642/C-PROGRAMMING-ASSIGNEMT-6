/*!
@file       the name of source file is q.h
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   lab 6
@date       file created on 14/10/2023
@brief      provide a brief explanation about what this source file does:
            This file is contains 6 function definitions be to called by 
            main in qdriver
            main in qdriver the 6 functions are
            - reverse_array(int a[], int size)                              // reverse the order of the array and stor it in to the same array
            - add_arrays(int const a[], int const b[], int c[], int size)   // add elements of first two arrays and put their sum in third array. Vector Addition
            - scalar_multiply(int a[], int size, int multiplier)            // multiply each elements in a array with the given multiplier.
            - dot_product(int const a[], int const b[], int size)           // multiply each corresponding element of 2 arrays and sum these products.
            - cross_product(int const a[], int const b[], int c[])          // find the cross product of the first two array and store into the third array. The size of all three arrays will always be at least three for cross product.
            - length(int const a[ ], int size)                              // squareroot the sum of all the value in an array where the values are squared
____________________________________________________________________________________________________________________________________________________________________*/
#include <math.h>
#include <stdio.h>
#include "q.h"

void reverse_array(int a[], int size){                                      // Given an array, reverse the order of elements in array.
    int temp;
    for (int i = 0; i < size/2; i++) {
        temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }}

void add_arrays(int const a[], int const b[], int c[], int size){           // Add elements of first two arrays and put their sum in third array.
    for (int i = 0; i < size; i++) {
     c[i] = a[i] +b[i];
        
    }}

void scalar_multiply(int a[], int size, int multiplier){                    // Given an array and a multiplier, multiply each element by multiplier.
    for (int i = 0; i < size; i++){
        a[i] = a[i]*multiplier;
    }}

int dot_product(int const a[], int const b[], int size){                    // Given two arrays, return the dot product. which is the means sum of products, i.e., multiply each corresponding element of 2 arrays and sum these products.
    int val=0;
    for (int i = 0; i < size; i++) {
        val += a[i] * b[i];
    }
    return val;}

void cross_product(int const a[], int const b[], int c[]){                  // Given three arrays, determine the cross product of the first two. The cross product is another array and will be placed into third array. The size of all three arrays will always be at least three.    
    c[0] = a[1]*b[2] - a[2]*b[1];
    c[1] = -(a[0]*b[2] - a[2]*b[0]);
    c[2] = a[0]*b[1] - a[1]*b[0];}

double length(int const a[ ], int size){                                    // Return length or magnitude of array with size element.
    double sum = 0.00;
    for (int i = 0; i < size; i++){
        sum += pow(a[i],2);
    }
    return sqrt(sum);}
