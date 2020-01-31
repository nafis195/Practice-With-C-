// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Undirected Graph Representation Using Adjacency List
// Main.cpp


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define MAX 100000
vector <int> edges[MAX];
vector <int> costs[MAX];

int main()
{
	int numNodes, numEdges; 
	cin >> numNodes >> numEdges;  // taking input of number of nodes and edges

	// taking input of nodes and edges and push into the vector
	for (int i = 1; i <= numEdges; i++)
	{
		int x, y;
		cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
		costs[x].push_back(1);
		costs[y].push_back(1);
	}

	// output the adjacent ndoes and degree of each nodes
	for (int i = 1; i < numNodes; i++)
	{
		cout << "Adjacent nodes of node " << i << ": ";
		for (int j = 0; j < edges[i].size(); j++)
			cout << edges[i][j] << ' ';
		cout << "Degree: " << edges[i].size() << endl;
	}

	return 0;
}