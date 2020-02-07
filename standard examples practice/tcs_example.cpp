// RAJ BHARTI
//IIT KHARAGPUR

//This is The Coding Area
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  //cout<<"t:"<<t<<endl;
  float a;
  cin>>a;
  //cout<<"a:"<<a<<endl;
  
  float d;
  d=t*a;
  d=d/360;
  if(d>12)
  {
      d=d-12;
  }
  //cout<<d;
  float m;
  int h;
  h=int(d);
  //cout<<endl<<"h:"<<h<<endl;
  m=(d-h)*60;
  //cout<<"m:"<<m<<endl;
  float m1;
  m1=m/5;
  //cout<<"m1:"<<m1<<endl;
  float s;
  s=(m1*30)/12;
  //cout<<"s:"<<s<<endl;
  float ans;
  ans =abs(m1-h)*30 -s;
 // cout<<"ans "<<ans<<endl;
 if(ans>180)
 {
     ans=360-ans;
 }
  if(h==12 && m==0)
  {
      //return 0;
      cout<<fixed<<setprecision(2)<<0.00;
  }
  else 
  {
      //return ans;
      cout<<fixed<<setprecision(2)<<ans;
  }
  
  
}
