// fibonacci of n (fib(n)) using TABULATION method od DP

#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define NIL -1

int lookup[MAX];

void _initialize()
{
    for(int i=0;i<MAX;i++)
    {
        lookup[i]=NIL;
    }
}

int fib(int n)
{
    if(lookup[n]==NIL)
    {
        if(n<=1)
            lookup[n]=n;
        else
            lookup[n]=fib(n-1)+fib(n-2);
    }
return lookup[n];
}


int main()
{
    int n=40;
    double time_taken;
    clock_t begin,end;
    begin=clock();
    
    _initialize();
    
    cout<<"fib(n)="<<fib(n)<<endl;
    end=clock();
    time_taken=double(end-begin)/CLOCKS_PER_SEC;
    cout<<"time_taken:"<<time_taken<<endl;
    /* OUTPUT WILL be
    fib(n)=102334155
time_taken:4.2e-05
    */
    
    
}
