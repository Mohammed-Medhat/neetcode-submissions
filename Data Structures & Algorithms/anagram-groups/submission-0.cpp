class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<vector<int>> freq(strs.size(), vector<int>(26, 0));

        
        for (int i = 0; i < strs.size(); i++) {
            for (char c : strs[i]) {
                freq[i][c - 'a']++;
            }
        }

       
        vector<bool> used(strs.size(), false);

        for (int i = 0; i < strs.size(); i++) {
            if (used[i]) continue;
            vector<string> group;
            group.push_back(strs[i]);
            used[i] = true;

            for (int j = i + 1; j < strs.size(); j++) {
                if (!used[j] && freq[i] == freq[j]) {
                    group.push_back(strs[j]);
                    used[j] = true;
                }
            }
            ans.push_back(group);
        }

        return ans;
    }
};
