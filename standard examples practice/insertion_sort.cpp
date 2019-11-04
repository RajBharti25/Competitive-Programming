// C++ program for insertion sort  
#include <iostream>
using namespace std;

// a function to print the array
void print_array(int arr[], int n)
{   
	int i;
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertion_sort(int arr[],int n)
{
    int i, j, key;
	for(i=0; i<n; i++)
	{
		key=arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

int main()
{
	int arr[] = {1, 6, 2, 4, 9, 12};
	int n=sizeof(arr)/sizeof(arr[0]);
	int n2=sizeof(arr[0]);
	cout<<"size of n:"<<n<<endl;
    cout<<"unsorted array is:";
	print_array(arr,n);
	insertion_sort(arr,n);
	cout<<"sorted array is : ";
	print_array(arr,n);

}
