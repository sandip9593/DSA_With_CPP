class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
         string start = "";
        string target = "123450";

        // Serialize the 2D board into a 1D string
        for (const auto& row : board) {
            for (int num : row) {
                start += to_string(num);
            }
        }
        
        // Define possible moves for each position of '0'
        vector<vector<int>> directions = {
            {1, 3},    // 0 can move to indices 1, 3
            {0, 2, 4}, // 1 can move to indices 0, 2, 4
            {1, 5},    // 2 can move to indices 1, 5
            {0, 4},    // 3 can move to indices 0, 4
            {1, 3, 5}, // 4 can move to indices 1, 3, 5
            {2, 4}     // 5 can move to indices 2, 4
        };
        
        queue<pair<string, int>> q; // Queue for BFS: {current state, steps taken}
        unordered_set<string> visited; // Set to track visited states
        
        q.push({start, 0}); // Start BFS from the initial state
        visited.insert(start);
        
        while (!q.empty()) {
            auto [state, steps] = q.front();
            q.pop();
            
            // Check if we reached the target state
            if (state == target) {
                return steps;
            }
            
            // Find the position of '0'
            int zeroIdx = state.find('0');
            
            // Generate all possible next states
            for (int nextIdx : directions[zeroIdx]) {
                string nextState = state;
                swap(nextState[zeroIdx], nextState[nextIdx]);
                
                // Process the state if it hasn't been visited
                if (!visited.count(nextState)) {
                    q.push({nextState, steps + 1});
                    visited.insert(nextState);
                }
            }
        }
        
        // If no solution is found, return -1
        return -1;
    
    }
};