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

void DFSUtil(vector<int> adj[], int u, vector<bool> &visited)
{
	visited[u]=true;
	cout<<u<<" ";
	for(int i=0; i<adj[u].size(); ++i)
	{
		if(visited[adj[u][i]]==false)
			DFSUtil(adj,adj[u][i], visited);
	}
}

void DFS(vector<int> adj[], int V)
{
	vector<bool> visited(V, false);
	for(int u=0; u<V; ++u)
	{
		if(visited[u]==false)
			DFSUtil(adj, u, visited);
	}
}





// Driver code 
int main() 
{ 
    int V = 6; 
  
    vector<int> adj[V]; 
  
    // Vertex numbers should be from 0 to 4. 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    addEdge(adj, 0, 5);
    DFS(adj, V); 
    return 0; 
} 
