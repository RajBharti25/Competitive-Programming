//this code illustrate the creation and printing  of the List class of the STL library

#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 

// A function to print the all the element of the list

void showlist(list<int> g)
{
	list<int>::iterator it;
	for(it=g.begin();it!=g.end();++it)
		cout<<"\t"<< *it;
	cout<<endl;
}

// driver code 
int main()
{

	list <int> gqlist;


	for(int i=0;i< 10;i++)
	{
		gqlist.push_back(i*2);
	}

	cout << "\nList (gqlist1) is :"; 
    showlist(gqlist); 

    cout<<"gqlist.front():"<<gqlist.front()<<endl;

    cout<<"gqlist.back():"<<gqlist.back()<<endl;

    cout<<"gqlist.pop_front():";
    gqlist.pop_front();
    showlist(gqlist);

    cout<<"gqlist.reverse():";
    gqlist.reverse();
    showlist(gqlist);

    cout<<"gqlist.sort():";
    gqlist.sort();
    showlist(gqlist);


	return 0;

}



