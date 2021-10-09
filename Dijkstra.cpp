#include <iostream>
#include <unordered_map>
#include <map>
#include <climits>
#include <list>
using namespace std;

class Graph {
	map<int,list<pair<int,int>>> mp;
public:
	void addEdge(int x,int y,bool isDirected,int weight)
	{
		mp[x].push_back(make_pair(y,weight));
		if(!isDirected)
		{
			mp[y].push_back(make_pair(x,weight));
		}
	}

	int minimumDistance(unordered_map<int,bool> &added, unordered_map<int,int> &distance)
	{
		int min = INT_MAX;
		int minValue;
		for(auto i:distance)
		{
			if(i.second<min and added[i.first]==false)
			{
				min = i.second;
				minValue = i.first;
			}
		}
		return minValue;
	}

	void dijkstra(int src)
	{
		unordered_map<int,bool> added;
		unordered_map<int,int> distance;
		for(auto i:mp)
		{
			added[i.first] = false;
			distance[i.first] = INT_MAX;
		}
		distance[src] = 0;
		for(auto i=mp.begin();i!=mp.end();++i)
		{
			int minValue = minimumDistance(added, distance);
			added[minValue] = true;
			if(distance[minValue]!=INT_MAX)
			{
				for(auto j : mp[minValue])
				{
					if(added[j.first]==false and distance[minValue]+j.second<distance[j.first])
					{
						distance[j.first] = distance[minValue]+j.second;
					}
				}
			}
		}
		Print(distance);
	}

	void Print(unordered_map<int,int>& distance)
	{
		cout<<"Node   Distance\n";
		for(auto i:mp)
		{
			cout<<" "<<i.first<<"        "<<distance[i.first]<<endl;
		}
	}
};

int main()
{
	Graph g;
	g.addEdge(0,1,false,4);
	g.addEdge(0,7,false,8);
	g.addEdge(1,7,false,11);
	g.addEdge(1,2,false,8);
	g.addEdge(2,3,false,7);
	g.addEdge(2,8,false,2);
	g.addEdge(2,5,false,4);
	g.addEdge(3,4,false,9);
	g.addEdge(3,5,false,14);
	g.addEdge(4,5,false,10);
	g.addEdge(5,6,false,2);
	g.addEdge(6,8,false,6);
	g.addEdge(6,7,false,1);
	g.addEdge(7,8,false,7);
	g.dijkstra(0);
}