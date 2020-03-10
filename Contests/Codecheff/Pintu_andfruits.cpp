#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int f[n],p[n],b[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>f[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>p[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        b[i]=0;
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(f[i]-1==j)
	            {
	                b[j]=b[j]+p[i];
	                //cout<<f[i]<<" "<<j<<endl;
	            }
	        }
	    }
	    sort(b,b+m);
	    for(int i=0;i<m;i++)
        	{
        	    if(b[i]!=0)
        	    {
        	        cout<<b[i];
        	        break;
        	    }
        	}
        	cout<<endl;
	    
	}
	
}
