class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int max = INT_MAX ; 
        vector <vector<int>> ans  = {{0,0,max}} ; 
        sort(items.begin(),items.end()) ; 

        for (const auto & item : items) {
            int price = item[0] ;
            int beauty = item[1] ;
            if(beauty > ans.back()[1]){
                ans.back()[2] = price ; 
                ans.push_back({price,beauty,max}) ;

            }
        }
        vector <int> result  ; 
        for (int x : queries) {
            for (int i = ans.size() - 1 ; i>=0 ; i--){
                if(ans[i][0] <=x) {
                result.push_back(ans[i][1]) ; 
                break ; 
                }
            }
        }
        return result ; 
    }
};