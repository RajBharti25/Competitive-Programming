#include<bits/stdc++.h>
using namespace std;
void isPaladrome(string str)
{
    cout<<str<<endl;
    int l=str.size();
    string left,right;
    left="";
    right="";
    if(l%2==1)
    {   
        int p1=l/2;
        str.erase(p1,1);
    }
    l=str.size();
    int p=l/2;
    
    for(int i=p;i<l;i++)
    {
        right=right+str[i];
        // cout<<endl<<right;
    }
    for(int i=p-1;i>=0;i--)
    {
        left=left+str[i];
        // cout<<endl<<left;
    }
    if(left==right)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}

int main()
{
    string str="ABCDCBA";
    string str1="abba";
    string str2="abbccbba";
    // string d="";
    int l=str.size();
    // cout<<endl<<"l:"<<l;
    // cout<<endl<<str+d;
    isPaladrome(str);
    isPaladrome(str1); 
    isPaladrome(str2); 
    isPaladrome("geeks"); 
    
}
