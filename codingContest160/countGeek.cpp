class Solution {
  public:
    #define mod 1000000007
    int solve(string &str, string &s , int i , int j ,vector<vector<int>> &dp){
        if(j == 4){
            return 1 ;
        }
        if(i == str.length())return 0 ;
        if(dp[i][j] != -1)return dp[i][j] ;
        int inclu = 0 ;
        int exclu = 0 ;
        if(str[i] == s[j]){
          inclu = (solve(str,s,i+1,j+1,dp))%mod;
        }
          exclu = (solve(str,s,i+1,j,dp)%mod) ;
          return dp[i][j] = (inclu + exclu)%mod ;
    }
    int geekCount(string s) {
        // code here
        string str = "geek";
        vector<vector<int>> dp(s.length(),vector<int>(4,-1));
        return solve(s,str,0,0,dp);
    }
};

