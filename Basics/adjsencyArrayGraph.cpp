#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int arr[N][N];

//Adjacency matrix
//space complexity O(N^2)
// N != 10^5 ; N<=10^3

int main(){
	int n, t;
	cin >> n >> t;
	cout << n << " " << t<<endl;
	for (int i = 0; i < t; ++i)
	{
		int v1, v2;
		cin >>v1 >> v2;

		arr[v1][v2] = 1;
		arr[v2][v1] = 1;
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <=n; ++j)
		{
			cout << arr[i][j]<< " ";
		}
		cout <<endl;
	}
}