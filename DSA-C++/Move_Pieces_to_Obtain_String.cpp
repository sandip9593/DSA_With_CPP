class Solution {
public:
    bool canChange(string start, string target) {
        // Remove '_' and check if the relative order of 'L' and 'R' matches
    string filteredStart, filteredTarget;
    for (char c : start) if (c != '_') filteredStart += c;
    for (char c : target) if (c != '_') filteredTarget += c;
    if (filteredStart != filteredTarget) return false;

    // Check movement constraints
    int n = start.size();
    int startIndex = 0, targetIndex = 0;

    for (int i = 0; i < n; ++i) {
        if (start[i] == 'L' || start[i] == 'R') {
            // Find the corresponding piece in the target
            while (target[targetIndex] == '_') targetIndex++;
            if (start[i] == 'L' && i < targetIndex) return false; // 'L' can't move right
            if (start[i] == 'R' && i > targetIndex) return false; // 'R' can't move left
            targetIndex++;
        }
    }
    return true; 
    }
};