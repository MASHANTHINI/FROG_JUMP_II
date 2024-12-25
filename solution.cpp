class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        vector<int>dp(n,0);
        dp[0]=0;
        int m=INT_MIN;
        for(int i=1;i<n;i++){
            int first=dp[i-1]+abs(stones[i]-stones[i-1]);
            int second=0;
            if(i>1){
                second=dp[i-2]+abs(stones[i]-stones[i-2]);
            }
            int a=max(first,second);
            m=max(m,a);
        }
        return m;
    }
};
