/*!
@file       the name of source file is q.h
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   lab 6
@date       file created on 14/10/2023
@brief      provide a brief explanation about what this source file does:
            This file is contains 6 function declaraction be to called by 
            main in qdriver
__________________________________________________________________________*/

void reverse_array(int a[], int size);                              // Given an array, reverse the order of elements in array.
void add_arrays(int const a[], int const b[], int c[], int size);   // Add elements of first two arrays and put their sum in third array.
void scalar_multiply(int a[], int size, int multiplier);            // Given an array and a multiplier, multiply each element by multiplier.
int dot_product(int const a[], int const b[], int size);            // Given two arrays, return the dot product.// Dot product means sum of products, i.e., multiply each// corresponding element of 2 arrays and sum these products.
void cross_product(int const a[], int const b[], int c[]);          // Given three arrays, determine the cross product of the first two.// The cross product is another array and will be placed into third array.// The size of all three arrays will always be at least three.
double length(int const a[ ], int size);                            // Return length or magnitude of array with size element.