/*

You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
Example:

Example 1 : Consider the following 3 activities sorted by
by finish time.
     start[]  =  {10, 12, 20};
     finish[] =  {20, 25, 30};
A person can perform at most two activities. The 
maximum set of activities that can be executed 
is {0, 2} [ These are indexes in start[] and 
finish[] ]

Example 2 : Consider the following 6 activities 
sorted by by finish time.
     start[]  =  {1, 3, 0, 5, 8, 5};
     finish[] =  {2, 4, 6, 7, 9, 9};
A person can perform at most four activities. The 
maximum set of activities that can be executed 
is {0, 1, 3, 4} [ These are indexes in start[] and 
finish[] ]
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
Example:

Example 1 : Consider the following 3 activities sorted by
by finish time.
     start[]  =  {10, 12, 20};
     finish[] =  {20, 25, 30};
A person can perform at most two activities. The 
maximum set of activities that can be executed 
is {0, 2} [ These are indexes in start[] and 
finish[] ]

Example 2 : Consider the following 6 activities 
sorted by by finish time.
     start[]  =  {1, 3, 0, 5, 8, 5};
     finish[] =  {2, 4, 6, 7, 9, 9};
A person can perform at most four activities. The 
maximum set of activities that can be executed 
is {0, 1, 3, 4} [ These are indexes in start[] and 
finish[] ]

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Activity
{
    int start,finish,index;
};
bool activityCompare(Activity s1, Activity s2) 
{ 
    return (s1.finish < s2.finish); 
} 
void maxMeeting(Activity arr[],int n)
{
    sort(arr,arr+n,activityCompare);
    // for(int l=0;l<n;l++)
    // {
    //     cout<<"("<<arr[l].start<<","<<arr[l].finish<<")"<<", ";
    // }
    //cout<<endl;
    int i,j;
    i=0;
    //cout<<"("<<arr[i].start<<","<<arr[i].finish<<")"<<", ";
    cout<<arr[i].index<<" ";
    for(j=1;j<n;j++)
    {
        if(arr[j].start>=arr[i].finish)
        {
            //cout<<"("<<arr[j].start<<","<<arr[j].finish<<")"<<", ";
            cout<<arr[j].index<<" ";
            i=j;
        }
    }
}

int main() {
	//code
	
	int n,t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    struct Activity arr[n];
    	for(int i=0;i<n;i++)
    	{
    	    int a;
    	    cin>>a;
    	    arr[i].start=a;
    	    arr[i].index=i+1;
    	    //cout<<a<<" ";
    	}
    	//cout<<endl;
    	for(int i=0;i<n;i++)
    	{
    	    int a;
    	    cin>>a;
    	    arr[i].finish=a;
    	    //cout<<a<<" ";
    	}
    // 	map<int,int>MAP;
    // 	for(int i=0;i<n;i++)
    // 	{
    // 	    MAP.insert(pair<int,int>(i,arr[i].start));
    // 	}
    	//map<int, int>::iterator itr; 
    // 	for(itr=MAP.begin();itr!=MAP.end();itr++)
    // 	{
    // 	    cout<<itr->second<<" "<<itr->first<<endl;
    // 	}
    	//cout<<endl;
    	
    // 	for(int l=0;l<n;l++)
    //         {
    //             cout<<"("<<MAP.find(arr[l].start)->first<<", ";
    //         }
    	//cout<<endl;
    	//cout<<"Raj BHarti"<<endl;
    	maxMeeting(arr,n);
    	cout<<endl;
	}
	
	
	return 0;
}
