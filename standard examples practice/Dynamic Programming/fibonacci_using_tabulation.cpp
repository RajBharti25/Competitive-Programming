// fibonacci of n (fib(n)) using TABULATION method od DP

#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int f[n+1];
    f[0]=0;f[1]=1;
    for(int i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
int main()
{
    int n=40;
    double time_taken;
    clock_t begin,end;
    begin=clock();
    cout<<"fib(n)="<<fib(n)<<endl;
    end=clock();
    time_taken=double(end-begin)/CLOCKS_PER_SEC;
    cout<<"time_taken:"<<time_taken<<endl;
    /* OUTPUT WILL be
    fib(n)=102334155
    time_taken:5.4e-05
    */
    
    
}
