class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Min-heap for priority queue: {time, row, col}
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        // If the grid's starting moves are invalid
        if (grid[0][1] > 1 && grid[1][0] > 1) {
            return -1;
        }

        // Movement directions
        vector<pair<int, int>> moves = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

        pq.push({0, 0, 0}); // {time, row, col}

        while (!pq.empty()) {
            auto current = pq.top();
            pq.pop();
            int time = current[0], row = current[1], col = current[2];

            // If we reach the bottom-right corner
            if (row == m - 1 && col == n - 1) {
                return time;
            }

            // Skip already visited cells
            if (visited[row][col]) continue;
            visited[row][col] = true;

            // Explore neighbors
            for (auto& move : moves) {
                int newRow = row + move.first;
                int newCol = col + move.second;

                if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && !visited[newRow][newCol]) {
                    int diff = grid[newRow][newCol] - time;

                    int newTime;
                    if (diff <= 1) {
                        newTime = time + 1; // Move directly
                    } else {
                        newTime = time + 1 + (diff / 2) * 2; // Adjust time to meet the constraint
                        // most important part
                        
                    }

                    pq.push({newTime, newRow, newCol});
                }
            }
        }

        return -1; // No valid path
    }
};
