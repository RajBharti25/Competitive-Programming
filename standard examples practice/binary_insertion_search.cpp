                // Binary Insertion Sort
// This algorithm uses Binary search inside insertion sort which decreses computation time from 
// O(n*n) to O(n*log(n))

#include<iostream>
using namespace std;

void print_array(int arr[], int n)
{    
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int BinarySearch(int arr[], int low, int high, int key)
{    
	if(low==high)
	{
		if(arr[low]<key)
			return low+1;
		else
			return low;
	}

	if(arr[high]<key)
		return high+1;
     if (arr[low]>key)
     	return low;

    int mid=(low+high)/2;

    if(arr[mid]>key)
    {
    	return BinarySearch(arr, low,  mid-1, key);
    }
    
    return BinarySearch(arr, mid+1, high, key);
}

void binary_insertion_sort(int arr[], int n)
{
	int i,j,key,loc;
	for(i=1;i<n;i++)
	{
		key = arr[i];
		j=i-1;
		// finding location for the selected item to place using binary search
		loc =BinarySearch(arr, 0, j, key);
		while(j>=loc)
		{
			arr[j+1] = arr[j];
			j=j-1;
        }
        arr[j+1]=key;
	}
}

int main()
{
	int arr[]= {1,4,5,3,6,8,7,10,9,17,13};
	int n =sizeof(arr)/sizeof(arr[0]);
	cout<<"Size of arr n:"<<n<<endl;
	cout<<"unsorted array:";
	print_array(arr, n);
	cout<<"sorted  array :";
	binary_insertion_sort(arr,n);
	print_array(arr,n);
	return 0;

}
