// A simple representation of graph using STL 
#include<bits/stdc++.h> 
using namespace std; 

// A function to add Edge to the adjacency list
void addEdge(vector<int> adj[], int u, int v)
{
	adj[v].push_back(u);//add the u to the ned of the adjancy list of the v
	adj[u].push_back(v);
}

// function for printing the Graph;
void printGraph(vector<int> adj[], int V)
{
	for(int v=0;v<V;++v)
	{
		cout<<"adjacency list of the vertex "<< v<<"\nhead ";
		for(auto u:adj[v])
		{
			cout<<" -> "<<u;
		}
		cout<<endl;

	}
}


//DRIVER CODE
int main() 
{ 
    int V = 5; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printGraph(adj, V); 
    return 0; 
} 