// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Undirected Graph Representation Using Adjacency Matrix
// Main.cpp


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int node, edge, n1, n2, cost, count = 0;
	int matrix[100][100] = {0};

	cin >> node >> edge;  // input the numbers of nodes and edges

	// taking input the nodes and costs in a matrix form
	for (int i = 0; i < edge; i++)
	{
		cin >> n1 >> n2 >> cost;
		matrix[n1][n2] = cost;
		matrix[n2][n1] = cost;
	}

	// printing the nodes connected with other nodes and printing the degree of each node
	for (int i = 1; i <= node; i++)
	{
		for (int j = 1; j <= node; j++)
		{
			if (matrix[i][j] != 0)
			{
				cout << j << ' ';
				count++;
			}
		}
		cout << "Degree of node " << i << ": " << count << endl;
		cout << endl;
		count = 0;
	}
	
	return 0;
}