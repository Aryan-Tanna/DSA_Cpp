class Solution {
public:
    int appendCharacters(string t, string s) {
         int n=t.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(s[j]==t[i] && j<s.size()){
                j++;
            }
            
        }
        return -j+s.size();
    }
};