class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
         vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < n - 1; ++i) {
        graph[i].emplace_back(i + 1, 1); // i -> i+1 with weight 1
    }
    
    // Result array
    vector<int> result;

    // Helper function to calculate shortest path using Dijkstra's algorithm
    auto dijkstra = [&]() -> int {
        vector<int> dist(n, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        dist[0] = 0;
        pq.emplace(0, 0); // {distance, node}

        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (d > dist[u]) continue;

            for (auto [v, w] : graph[u]) {
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.emplace(dist[v], v);
                }
            }
        }
        return dist[n - 1];
    };

    // Process each query
    for (auto& query : queries) {
        int u = query[0], v = query[1];
        graph[u].emplace_back(v, 1); // Add new edge
        result.push_back(dijkstra()); // Compute shortest path
    }

    return result;
    }
};