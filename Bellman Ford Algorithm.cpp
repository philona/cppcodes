#include<bits/stdc++.h>
using namespace std;

struct node{
    int u;
    int v;
    int wt;
    node(int a,int b,int w)
    {
        u=a;
        v=b;
        wt=w;
    }

};

void BellmanFord(int src,int n,vector<node> adj)
{

    vector<int> distance(n+1,100000);
    distance[src]=0;
    
    int i,j;

    // Here, Relax all the edges n-1 times as max distance between two nodes in a graph can be n-1
    for(i=0;i<n-1;i++)
    {
        for(auto it: adj)
        {
            int p=it.u;
            int q=it.v;
            int weight = it.wt;

            if(distance[p]+weight<distance[q])
            {
                distance[q] = distance[p]+weight;
            }
        }
    }

    int flag=0;

// This loop is for checking the negative cycle in graph
    for(auto it: adj)
    {
        int p=it.u;
        int q=it.v;
        int weight = it.wt;

        if(distance[p]+weight<distance[q])
        {
            distance[q] = distance[p]+weight;
            flag=1;
            break;
        }
    }

    // If cycle present, then print negative cycle present , else print the distances of each node
    if(flag) 
    {
        cout<<"Negative Cycle present";
        return;
    }

    for(i=1;i<=n;i++) cout<<distance[i]<<" ";

    // Time Complexity - O((V-1)*E) = O(V*E) 
    // Space Complexity - O(V) (distance)
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,edges,i,a,b,wt;
    cin>>n>>edges;

    vector<node> adj;

    for(i=0;i<edges;i++)
    {
        cin>>a>>b>>wt;
        adj.push_back(node(a,b,wt));
        adj.push_back(node(b,a,wt)); // This is for the undirected graph else not needed for directed graph
    }

    // for(auto x: adj) cout<<x.u<<" ";

    BellmanFord(1,n,adj);

    return 0;
}
