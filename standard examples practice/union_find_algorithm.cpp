/*
  A disjoint-set data structure is a data structure that keeps track of a set of elements partitioned 
  into a number of disjoint (non-overlapping) subsets.
  A union-find algorithm is an algorithm that performs two useful operations on such a data structure:
  Find: Determine which subset a particular element is in. This can be used for determining if two elements are in the same subset.
  Union: Join two subsets into a single subset.
*/
#include<bits/stdc++.h>
using namespace std;
//to represent edge of  a graph
class Edge
{
	public:
	int src,dest;
};
//to represent a graph
class Graph
{
	public:
	int E,V;
	Edge *edge;
};
Graph* createGraph(int E,int V)
{
	Graph* graph =new Graph();
	graph->V=V;
	graph->E=E;
	graph->edge =new Edge[graph->E*sizeof(int)];
	return graph;

};

int find(int parent[],int i)
{
	if(parent[i]==-1)
		return i;
	return find(parent,parent[i]);
}

void Union(int parent[],int x,int y)
{
	int x1=find(parent,x);
	int y1=find(parent,y);
	if(x1 != y1)
	{
		parent[x1]=y1;
	}
}
int isCycle(Graph* graph)
{	
	 // Allocate memory for creating V subsets  
	int* parent=new int[graph->V*sizeof(int)];
	memset(parent,-1,sizeof(int)*graph->V);
	for(int i=0;i <graph->E;i++)
	{
		int x=find(parent,graph->edge[i].src);
		int y=find(parent,graph->edge[i].dest);
		if(x==y)
			return 1;
		Union(parent,x,y);
	}
	return 0;
}





int main()
{
	
	/* Let us create the following graph  
        0  
        | \  
        |  \  
        1---2 */
    int V = 3, E = 3;  
    Graph* graph = createGraph(V, E);  
  
    // add edge 0-1  
    graph->edge[0].src = 0;  
    graph->edge[0].dest = 1; 
  
    // add edge 1-2  
    graph->edge[1].src = 1;  
    graph->edge[1].dest = 2;  
  
    // add edge 0-2  
    graph->edge[2].src = 0;  
    graph->edge[2].dest = 2;  
  
    if (isCycle(graph))  
        cout<<"graph contains cycle";  
    else
        cout<<"graph doesn't contain cycle";  
  
    return 0;  
}