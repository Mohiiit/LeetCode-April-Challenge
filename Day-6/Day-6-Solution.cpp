class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        // firstly we will store string in hashmap by storting it.
        for(int i=0; i<strs.size(); i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            m[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto i=m.begin(); i!=m.end(); i++)
        {
            ans.push_back(i->second);
        }
        return ans;
    }
};
