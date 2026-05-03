class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<char> prefix;
        for (char c : strs[0]) {
            prefix.push_back(c);
        }
        for (string i :strs){
            int counter=0;
            for(int j=prefix.size()-1;j>=0;j--){
                if(prefix[j]==i[j]){
                    counter++;
                    continue;
                }
                else{
                   
                   prefix.erase(prefix.begin()+j , prefix.end());

                    
                }
            }

        }
        if(prefix.empty()==true){
            return "";
        }
        string s(prefix.begin(), prefix.end());
        return s;


    }
};