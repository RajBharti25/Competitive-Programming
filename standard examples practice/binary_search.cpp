
// Binary Search algorithm for searching the index which value is just greater than or equal to the Querry 
// This function return the index for the required place where we will put the Querry in the Sorted array



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



int main()
{
	int arr[]= {1,3,4,6,8,10,15,17};
	int n =sizeof(arr)/sizeof(arr[0]);
	cout<<"Size of arr n:"<<n<<endl;
	print_array(arr, n);
	cout<<BinarySearch(arr, 0,n,2);

}
