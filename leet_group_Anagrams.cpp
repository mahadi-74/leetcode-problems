#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<string>> groupAnagrams(vector<string> & strs){
        unordered_map<string, vector<string>> mp;

        for(int i=0; i<strs.size();i++){

            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        vector<vector<string>>result;

        for( auto it: mp){
            result.push_back(it.second);
        }
        return result;
    }
};
int main(){
    Solution Solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = Solution.groupAnagrams(strs);
    for (const auto& group : result) {
        cout << "[";
        for (const auto& str : group) {
            cout << str << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}