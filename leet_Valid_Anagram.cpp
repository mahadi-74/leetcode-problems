#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t){
        if(s.length() != t.length()){ 
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }
};
int main()
{
    Solution soln;
    cout<< (soln.isAnagram("racecar", "carrace")? "true":"false" )<<endl;
    return 0;
   
}