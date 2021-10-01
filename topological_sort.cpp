#include <bits/stdc++.h>
using namespace std;

void dfs_visit(vector<vector<int>>& Graph, int src, stack<int>& s, vector<bool>& visit) {
	visit[src] = 1;
	for(int i = 0; i < Graph[src].size(); i++)
		if(visit[Graph[src][i]] == 0)
		    dfs_visit(Graph, Graph[src][i], s, visit);
    s.push(src);
}

void dfs(vector<vector<int>>& Graph, int v, stack<int>& s) {
	vector<bool> visit(v);
	for(int i = 0; i < v; i++)
		if(visit[i] == 0)
			dfs_visit(Graph, i, s, visit);
}

void topological_sort(vector<vector<int>>& Graph, int v) {
	stack<int> s;
	dfs(Graph, v, s);
	while(!s.empty()) {
		cout << s.top() << ' ';
		s.pop();
	}
	cout << '\n';
}

int main() {
	int v, e, a, b;
	// all vertices are labelled from 0 to v-1
	cin >> v >> e;
	vector<vector<int>> Graph(v);
	// all directed edges
	for(int i = 0; i < e; i++) {
		cin >> a >> b;
		// edge a -> b
		Graph[a].push_back(b);
	} 
	topological_sort(Graph, v);
	return 0;
}
