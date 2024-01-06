#include "my_dijikstra.h"

int main()
{
	int graph[V][V];
	/*
	graph = { { 0, 2, 8, 0 },
		      { 1, 0, 3, 2 },
		      { 0, 6, 0, 5 },
		      { 1, 0, 4, 0 } };
	*/
	for(int i = 0; i < V; ++i)
	{
		for (int j = 0; j < V; ++j)
		{
			std::cin >> graph[i][j];
		}
	}

	dijkstra(graph);
	std::cout << graph[2][1] ? "true" : "false";
	std::cout << std::endl;
	return 0;
}
