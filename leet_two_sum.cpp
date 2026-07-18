#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;

        for(int i=0; i<nums.size(); i++)
        {
            int comp_element = target-nums[i];
            if(mp.find(comp_element) != mp.end())
            {
                return{mp[comp_element], i};
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};
int main()
{
    Solution soln;
    vector<int> nums = {2,11,15,7};
    int target = 9;
    vector<int> result = soln.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;   
}