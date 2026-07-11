class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxindex=-1;
        for(int i:nums){
                freq[i]++;
                if(freq[i]>freq[maxindex])
                maxindex=i;
        }
        return maxindex;

    }
};