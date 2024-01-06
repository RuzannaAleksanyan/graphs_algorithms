#ifndef DIJIKSTRA
#define DIJIKSTRA

#include <iostream>
#include <vector>
#include <climits> 
#define V 4

int min_dist(int dist[], bool set[])
{
	int min = INT_MAX;
	int min_index;

	for (int i = 0; i < V; ++i)
	{
		if(dist[i] <= min && set[i] == false)
		{
			min = dist[i];
			min_index = i;
		}
	}
	return min_index;
}


void print(int dist[])
{
	std::cout << "print graph" << std::endl;
	for(int i = 0; i < V; ++i)
	{
		std::cout << i << "		" << dist[i] << std::endl;
	}
}

void dijkstra(int graph[V][V])
{
	int dist[V];
	bool set[V];

	for(int i = 0; i < V; ++i)
	{
		dist[i] = INT_MAX;
		set[i] = false;
	}

	dist[0] = 0;

	for(int count = 0; count < V - 1; ++count)
	{
		int u = min_dist(dist, set);

		set[u] = true;

		for(int i = 0; i < V; ++i)
		{
			if(!set[i] && dist[u] + graph[u][i] < dist[i] && dist[u] != INT_MAX && graph[u][i])
			{
				dist[i] = dist[u] + graph[u][i];
			}
		}
	}
	print(dist);
}

#endif
