class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
         int m = grid.size();
    int n = grid[0].size();
    deque<pair<int, int>> dq; // deque for 0-1 BFS
    vector<vector<int>> visited(m, vector<int>(n, INT_MAX)); // to store minimum obstacles removed
    vector<int> dirs = {-1, 0, 1, 0, -1}; // direction vectors for moving in 4 directions
    
    dq.push_front({0, 0});
    visited[0][0] = 0;

    while (!dq.empty()) {
        auto [x, y] = dq.front();
        dq.pop_front();

        // If we reach the bottom-right corner
        if (x == m - 1 && y == n - 1) {
            return visited[x][y];
        }

        for (int k = 0; k < 4; k++) {
            int nx = x + dirs[k];
            int ny = y + dirs[k + 1];

            // Check if (nx, ny) is within bounds
            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                int new_cost = visited[x][y] + grid[nx][ny];

                // If a better path is found
                if (new_cost < visited[nx][ny]) {
                    visited[nx][ny] = new_cost;

                    // Add to deque accordingly
                    if (grid[nx][ny] == 0) {
                        dq.push_front({nx, ny});
                    } else {
                        dq.push_back({nx, ny});
                    }
                }
            }
        }
    }

    return -1; // Shouldn't reach here
    }
};