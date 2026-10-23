class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>lastseen(128,-1);
        int n=s.length();
        int left=0;
        int maxlen=0;
        for(int right=0;right<n;right++){
            char ch = s[right];
            if(lastseen[ch]>=left){
                left=lastseen[ch]+1;
            }
            lastseen[ch]=right;
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};
