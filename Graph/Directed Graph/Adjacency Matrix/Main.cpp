// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Directed Graph Representation Using Adjacency Matrix
// Main.cpp


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int node, edge, n1, n2, cost;
	int inCount = 0;
	int outCount = 0;
	int matrix[100][100] = { 0 };

	cin >> node >> edge;  // taking input the number of nodes and edges

	// taking input the nodes and costs in a matrix form
	for (int i = 0; i < edge; i++)
	{
		cin >> n1 >> n2 >> cost;
		matrix[n1][n2] = cost;
	}

	// output the adjacent nodes
	for (int i = 1; i <= node; i++)
	{
		cout << "Adjacent nodes of node " << i << ": ";
		for (int j = 1; j <= node; j++)
		{
			if (matrix[i][j] != 0)
			{
				cout << j << ' ';
				outCount++;
			}
			if (matrix[j][i] != 0)
			{
				inCount++;
			}
		}
		cout << endl;
		cout << "Indegree - " << inCount << ' ' << "Outdegree - " << outCount << endl;
		inCount = outCount = 0;
	}

	return 0;
}