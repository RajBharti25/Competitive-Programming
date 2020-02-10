#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    vector<int> v;
    istringstream ss(str);
    
    for(int i;ss>>i;)
    {
        v.push_back(i);
        if(ss.peek()==',')
        {
            ss.ignore();
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
