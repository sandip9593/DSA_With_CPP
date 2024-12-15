class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double, int>> maxheap;
        vector<vector<int>> temp = classes;
        double ans = 0.0;
 
        for (int i = 0; i < classes.size(); i++) {
            double ratio1 = (double)classes[i][0] / classes[i][1];
            double ratio2 = (double)(classes[i][0] + 1) / (classes[i][1] + 1);
            maxheap.push({ratio2 - ratio1, i});
        }
 
        while (extraStudents--) {
            int idx = maxheap.top().second;
            maxheap.pop();
 
            temp[idx][0]++;
            temp[idx][1]++; 
            double newchange1 = (double)temp[idx][0] / temp[idx][1];
            double newchange2 = (double)(temp[idx][0] + 1) / (temp[idx][1] + 1);
 
            maxheap.push({newchange2 - newchange1, idx});
        }
 
        double totratio = 0.0;
        for (auto it : temp) {
            totratio += (double)it[0] / it[1];
        } 
        ans = totratio / temp.size();
        return ans; 
    }
};
