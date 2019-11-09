#include <iostream>
using namespace std;


// Function to print the array arr of size n
void print_array(int arr[], int n)
{    
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
}

// Function to merge sort the given  two sorted array in sorted order
// it uses two function merge and merge_sort
void merge(int arr[],int l,int m, int r )
{
	int i, j, k;
	int n1 = m-l+1;
	int n2 = r-m;

	//creating temp array
	int L[n1],R[n2];
    
    //copying data to temp array	
	for(i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for(j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}
	/* Merge the temp arrays back into arr[l..r]*/
	//print_array(R,n2);
	//print_array(L,n1);
	i = 0;
	j = 0;
	k = l;
    while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
		/* Copy the remaining elements of L[], if there 
 ..........are any */
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}

}

void merge_sort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m = l+(r-l)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);
		merge(arr,l,m,r);

	}
}

int main()
{
	int arr[]={1,5,2,6,3,8,4,10,9,17,16};
	int n =sizeof(arr)/sizeof(arr[0]);
	cout<<"size of arr is :"<<n<<endl;
	cout<<"Unsorted array is:";
	print_array(arr,n);
	merge_sort(arr, 0, n-1);
	cout<<" Sorted array is :";
	print_array(arr,n);
	return 0;

}