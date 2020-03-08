/*
In this program, we have a pointer ptr that points to the 0th element of the array. Similarly, we can also declare a pointer that can point to whole array instead of only one element of the array. This pointer is useful when talking about multidimensional arrays.
Syntax:

data_type (*var_name)[size_of_array];
Example:

int (*ptr)[10];
Here ptr is pointer that can point to an array of 10 integers. Since subscript have higher precedence than indirection, it is necessary to enclose the indirection operator and pointer name inside parentheses. Here the type of ptr is ‘pointer to an array of 10 integers’.
Note : The pointer that points to the 0th element of array and the pointer that points to the whole array are totally different. The following program shows this:

*/
// C++ program to understand difference between 
// pointer to an integer and pointer to an 
// array of integers. 
#include <iostream> 
using namespace std; 
int main() 
{ 
	// Pointer to an integer 
	int *p; 
	
	// Pointer to an array of 5 integers 
	int (*ptr)[5]; 
	int arr[5]; 
	
	// Points to 0th element of the arr. 
	p = arr; 
	
	// Points to the whole array arr. 
	ptr = &arr; 
	
	cout << "p =" << p <<", ptr = "<< ptr<< endl; 
	p++; 
	ptr++; 
	cout << "p =" << p <<", ptr = "<< ptr<< endl; 
	
	return 0; 
} 

// This code is contributted by SHUBHAMSINGH10 
