class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> swrd;
        unordered_map<char,int> twrd;
        int n=s.size();
        if(n!=t.size()){
            return false;
        }
        for(int i=0;i<n;i++){
            swrd[s[i]]++;
            twrd[t[i]]++;
        }
        for(int i=0;i<n;i++){
            if(swrd[t[i]]!=twrd[t[i]]){
                return false;
            }
        }
        return true;
    }
};
