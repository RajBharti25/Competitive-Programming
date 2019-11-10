#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
void print_array(int arr[], int n)
{
	cout << "[ ";
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << "]";
	cout << endl;
}

// A utility function to swap two elements 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 
int partition(int arr[], int l, int h)
{
	int pivot = arr[h] ;
	int i=l-1;
	for(int j=l; j <= h-1; j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			swap(&arr[j],&arr[i]);
		}
	}
	swap(&arr[i+1],&arr[h]);
	return (i+1);
}

void QuickSort( int arr[], int l, int h)
{
	if(l<h)
	{
		int pi = partition(arr, l, h);
		QuickSort(arr, l, pi-1);
		QuickSort(arr, pi+1,h);
	}
}
int main()
{
	int arr[] = {10, 80, 30, 90, 50, 40, 70};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Unsorted input array is:";
	print_array(arr, n);
    QuickSort(arr, 0, n-1);
    cout<<"Sorted array is:";
    print_array(arr, n);
}