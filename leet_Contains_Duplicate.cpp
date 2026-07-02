#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
        
    }
    
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << (sol.isDuplicate(nums) ? "true" : "false") << endl;
    return 0;
}