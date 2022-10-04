/* Author- Amar Singh */
#include<iostream>
#include<vector>
#include<queue>

using namespace std;
/* This is for undirected graph, Remove the second condition for Directed Graph */
void addEdge(vector<int>* graph, int u, int v)
{
	graph[u].push_back(v);
	graph[v].push_back(u);   // for Undirected Graph
}

int main()
{
	int n; //vertices
	int e; //edges
	int v, u;  
	cout<< "Enter Size of Vertices \n";
	cin>> n;
	cout<< "Enter Size of Edges \n";
	cin>> e;
	int copy;
	copy= n;
	int a[n+1]= {0}; //array for node visited or not
	vector<int> graph[n+1]; 
	for(int i=1; i<=e; i++)
	{
		cout<<"From ";
		cin>>u;
		cout<<"To ";
		cin>>v;
		addEdge(graph,u,v); 
	}
	vector<int>::iterator it; 
	queue<int> q;
	q.push(1); 
	a[1] = 1; 
	int x;
	cout<<"BFS is\n";
	while(!q.empty())
	{
		x = q.front();
		q.pop();
		cout<<x <<" ";
		for(it=graph[x].begin(); it!=graph[x].end(); it++)
		{
			if(a[*it]!=1)
			{
				q.push(*it);
				a[*it]=1;
			}
		}
	}
	return 0;
}
