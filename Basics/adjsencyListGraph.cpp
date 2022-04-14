#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;

vector<pair<int,int>> graph[N];

// Adjacency List
// O(N+M)
// N = 10^5; E<10^7


int main(){
	int n,m;
	cin >> n>> m;
	for (int i = 0; i < m; ++i)
	{
		int v1, v2, wt;
		cin >> v1 >> v2 >> wt;

		graph[v1].push_back({v2, wt});
		graph[v2].push_back({v1, wt});
	}

}