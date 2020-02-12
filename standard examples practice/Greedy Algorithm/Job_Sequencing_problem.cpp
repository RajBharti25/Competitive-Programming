/*

Given a set of N jobs where each job i has a deadline and profit associated to it. Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit if and only if the job is completed by its deadline. The task is to find the maximum profit and the number of jobs done.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case consist of an integer N in first line denoting the number of jobs and the next line consist of Job id, Deadline and the Profit associated to that Job.

Output:
Output the number of jobs done and the maximum profit.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Deadline <= 100
1 <= Profit <= 500

Example:
Input:
2
4
1 4 20 2 1 10 3 1 40 4 1 30
5
1 2 100 2 1 19 3 2 27 4 1 25 5 1 15

Output:
2 60
2 127

Explanation:
Testcase 1: 2 jobs can be done with maximum profit of 60.

*/
#include <bits/stdc++.h>
using namespace std;

struct JOB
	{
	    int index,deadline,profit;
	};
	
bool compareRate(JOB a,JOB b)
{
    // if(a.deadline!=b.deadline)
    // {
    //     return a.deadline<b.deadline;
    // }
    
    return a.profit>=b.profit;
}
bool compareRate1(JOB a,JOB b)
{
    return a.deadline>=b.deadline;
}

void maxProfit(JOB job[],int n)
{
    
    sort(job,job+n,compareRate1);
    int maxDead=job[0].deadline;
    //cout<<endl<<"dm:"<<maxDead<<endl;
    sort(job,job+n,compareRate);
//     for(int i=0;i<n;i++)
//     {
// 	   cout<<"("<<job[i].index<<","<<job[i].deadline<<","<<job[i].profit<<"), ";
// 	}
// 	cout<<endl;
    int count,Tprofit;
    bool slot[maxDead];
    for(int k=0;k<maxDead;k++)
    {
        slot[k]=false;
    }
    count=1;
    Tprofit=job[0].profit;
    slot[job[0].deadline-1]=true;
    for(int j=1;j<n;j++)
    {
        if(slot[job[j].deadline-1]==false)
        {
            count=count+1;
            //cout<<"hola:"<<j<<endl;
            Tprofit=Tprofit+job[j].profit;
            slot[job[j].deadline-1]=true;
        }
        else
        {
            for(int k=job[j].deadline-2;k>=0;k--)
            {
                if(slot[k]==false)
                {
                    //cout<<"MAYA"<<endl;
                    count=count+1;
                    Tprofit=Tprofit+job[j].profit;
                    slot[k]=true;
                    break;
                }
            }
        }
    }
    cout<<count<<" "<<Tprofit;
}
int main() {
	//code
	
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    struct JOB job[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>job[i].index;
	        cin>>job[i].deadline;
	        cin>>job[i].profit;
	        //cout<<"("<<job[i].index<<","<<job[i].deadline<<","<<job[i].profit<<"), ";
	    }
	    //cout<<endl;
	    maxProfit(job,n);
	    cout<<endl;
	}
	return 0;
}
