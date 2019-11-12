// this example illustrate the Breadth First Searh for the directed Graph.
#include<iostream>
#include<list>
using namespace std;

// creating a class to represent a Graph with directed path with adjacency list representation
class Graph 
{
	int V; //number of vertex in the Graph
	//create  pointer towards a adjacency matrix
	list<int>* adj;
public:
	Graph(int V); // Constructor
	
	// function to add a edge tot he graph
	void addEdge(int v, int u);
	// a function to traverse Graph using BFS and printh the path from sourse 's'.
	void BFS(int s);
};

Graph::Graph(int V)
{
	this-> V=V;
	adj = new list<int> [V];
}

void Graph::BFS(int s)
{
	// mark all the vertices as not visited
	bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
	// create a queue for BFS
	list<int> queue;

	// mark the current vertex as visited
	visited[s]=true;
	queue.push_back(s);
    
    // 'i' will be used to get all adjacent 
    // vertices of a vertex 
    list<int>:: iterator i;
	
	while(!queue.empty())
	{
		s=queue.front();
		cout<<s<<" ";
		//deque the s from the queue
		queue.pop_front();
		// Get all adjacent vertices of the dequeued 
        // vertex s. If a adjacent has not been visited,  
        // then mark it visited and enqueue it 
        for(i=adj[s].begin();i!=adj[s].end();++i)
        {
        	if(!visited[*i])
        	{
        		visited[*i]=true;
        		queue.push_back(*i);
        		
        	}

        }
	}

}

void Graph::addEdge(int v, int u)
{
	adj[v].push_back(u);
}


//driver program tot est the above parts
int main()
{
   //create a Graph as described above
   Graph g(4);
   g.addEdge(0, 1); 
   g.addEdge(0, 2); 
   g.addEdge(1, 2); 
   g.addEdge(2, 0); 
   g.addEdge(2, 3); 
   g.addEdge(3, 3); 
  
   cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n"; 
   g.BFS(2); 
  
   return 0; 
}