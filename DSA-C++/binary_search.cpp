#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int l = 0, r = nums.size();
    while (l < r) {
        int mid = (l + r) >> 1;  // This is the same as (l + r) / 2
        if (nums[mid] >= target) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main() {
    vector<int> nums = {1, 3, 5, 6};  // Example input
    int target = 5;  // Example target

    int result = searchInsert(nums, target);

    cout << "Element should be inserted at index: " << result << endl;
    return 0;
}
