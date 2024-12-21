class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxTime = events[0][1]; // Time taken by the first event
        int resultButton = events[0][0];    // Button for the first event
        int prevTime = events[0][1];        // Previous event's time
        
        for (int i = 1; i < events.size(); i++) { // Loop through the events starting from the second
            int currentTime = events[i][1];
            int timeTaken = currentTime - prevTime; // Time taken for the current button press
            
            // Update the button with the longest time or smallest button index in case of a tie
            if (timeTaken > maxTime || 
               (timeTaken == maxTime && events[i][0] < resultButton)) {
                maxTime = timeTaken;
                resultButton = events[i][0];
            }
            
            prevTime = currentTime; // Update the previous time
        }
        
        return resultButton; // Return the button with the longest time
    }
};
