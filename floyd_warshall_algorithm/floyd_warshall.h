#ifndef FLOYD
#define FLOYD

#include <iostream>
#include <vector>
#include <climits>

#define V 4
#define INF 99999

void floyd_warshall(std::vector<std::vector<int>>& dist) {
    for(int k = 0; k < V; ++k) {
        for(int i = 0; i < V; ++i) {
            for(int j = 0; j < V; ++j) {
                if(dist[i][k] != INF && dist[k][j] != INF && dist[i][j] > (dist[i][k] + dist[k][j])) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

}

void print_solution(std::vector<std::vector<int>>& dist) {
    std::cout << "The following matrix shows the shortest distances between every pair of vertices\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INF) {
                std::cout << "INF"
                     << " ";
            } else {
                std::cout << dist[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

#endif  // FLOYD
