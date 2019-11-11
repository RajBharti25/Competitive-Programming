//This function illustrate some of the important function and utility of the VECTORES

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	cout<<"*****ITERATORS****         ";
	//This apart illustrate the iterators of the vector
	vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
        cout << *ir << " "; 
    g1.clear();


    cout<<"*****CAPACITY*****        ";
// This part illustrate the capacity function in the vector
	
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "\n\nSize : " << g1.size(); 
    cout << "\nCapacity : " << g1.capacity(); 
    cout << "\nMax_Size : " << g1.max_size(); 
  
    // resizes the vector size to 4 
    g1.resize(4); 
  
    // prints the vector size after resize() 
    cout << "\nSize : " << g1.size(); 
  
    // checks if the vector is empty or not 
    if (g1.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
  
    // Shrinks the vector 
    g1.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (auto it = g1.begin(); it != g1.end(); it++) 
        cout << *it << " "; 

    cout<<"*****ACCESSOR*****        ";
// this part illustrate  the use of some of the element accesser of the  vector
	vector<int> v;
	for(int i=1;i<=10;++i)
		v.push_back(10*i);
	cout<<"\n\nreference operator [v] at v[2] ="<<v[2];
	cout<<"\nat:v.at(4)="<<v.at(4);
	cout<<"\nfront="<<v.front();
	cout<<"\nback="<<v.back();
	int* pos=v.data();
	cout<<"\npointer to the first element="<<pos;

    cout<<"*****MODIFIER*****";
// This aprt illustrates the modifiers in the vectors//


	vector<int> v1;
	   //assign 10 to 5 times in the vector
	v1.assign(5,10);
	cout<<"\nThe vector elements are:";
	for(int i=0;i<v1.size();++i)
	{
		cout<<v1[i]<<" ";
	}
	//inserting 15 at the last
	v1.push_back(15);
	int n=v1.size();
	cout<<"\nthe last elemen is:"<<v1[n-1];

	// removing last element 
	v1.pop_back();
	n=v1.size();
	cout << "\nnew last element is: "<<v1[n-1];

	//inserting at 5 at beginning
	v1.insert(v1.begin(),5);
	cout << "\nThe first element is: " << v1[0]; 

	// inserts at the beginning 
    v1.emplace(v1.begin(), 5); 
    cout << "\nThe first element is: " << v1[0]; 
  
    // Inserts 20 at the end 
    v.emplace_back(20); 
    n = v1.size(); 
    cout << "\nThe last element is: " << v1[n - 1]; 
  
    // erases the vector 
    v1.clear(); 
    cout << "\nVector size after erase(): " << v1.size(); 


    // two vector to perform swap 
    vector<int> v2, v3; 
    v2.push_back(1); 
    v2.push_back(2); 
    v3.push_back(3); 
    v3.push_back(4); 
  
    cout << "\n\nVector 1: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v3.size(); i++) 
        cout << v3[i] << " "; 
  
    // Swaps v1 and v2 
    v1.swap(v2); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v3.size(); i++) 
        cout << v3[i] << " "; 

}