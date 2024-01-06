#include "floyd_warshall.h"

int main() {
    std::vector<std::vector<int>> graph = {{0, 5, INF, 10},
                                        {INF, 0, 3, INF},
                                        {INF, INF, 0, 1},
                                        {INF, INF, INF, 0}};

    floyd_warshall(graph);
    print_solution(graph);
    return 0;
}
