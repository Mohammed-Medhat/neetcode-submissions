class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        
        for (auto element :nums)
        {
            freq[element]++;

        } 
         vector<pair<int,int>> vec(freq.begin(), freq.end());

    sort(vec.begin(), vec.end(),
         [](const auto &a, const auto &b) {
             return a.second > b.second;
         });

    // Collect first 3 values only
    vector<int> result;
    int n = min(k, (int)vec.size());
    for (int i = 0; i < n; i++) {
        result.push_back(vec[i].first);
    }
    return result;

        



    }
};
